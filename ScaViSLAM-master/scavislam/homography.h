// This file is part of ScaViSLAM.
//
// Copyright 2011 Hauke Strasdat (Imperial College London)
//
// ScaViSLAM is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published
// by the Free Software Foundation, either version 3 of the License, or
// any later version.
//
// ScaViSLAM is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with ScaViSLAM.  If not, see <http://www.gnu.org/licenses/>.

#ifndef SCAVISLAM_HOMOGRAPHY_H
#define SCAVISLAM_HOMOGRAPHY_H

#include <sophus/se3.h>

namespace ScaViSLAM
{
  using namespace Sophus;
  class Homography
  {
  public:
    Homography(const SE3 & T_c2_from_c1);
    Matrix3d calc_c2_from_c1(const Vector3d & normal,
                    const Vector3d & point_on_plane) const;
    SE3 T_c2_from_c1;
  public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
  };
}
#endif
