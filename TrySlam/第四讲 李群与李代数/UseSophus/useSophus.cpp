#include <iostream>
#include <cmath>
using namespace std;

#include <Eigen/Core>
#include <Eigen/Geometry>
using namespace Eigen;

#include "sophus/se3.hpp"
#include "sophus/so3.hpp"
using namespace Sophus;

int main( int argc, char** argv )
{
    Matrix3d R = AngleAxisd(M_PI / 2, Vector3d(0, 0, 1)).toRotationMatrix();
    Sophus::SO3 SO3_R(R);
    SO3 SO3_v(0, 0, M_PI / 2);
    Quaterniond q(R);
    SO3 SO3_q(q);
    cout << "SO(3) from matrix: " << SO3_R << endl;
    cout << "SO(3) from vector: " << SO3_v << endl;
    cout << "SO(3) from quaternion: " << SO3_q << endl;

    Vector3d so3 = SO3_R.log();
    cout << "so3 = " << so3.transpose() << endl;
    cout << "so3 hat = " << SO3::hat(so3) << endl;
    cout << "so3 hat vee = " << SO3::vee(SOE::hat(so3)).transpose() << endl;

    Vector3d update_so3(1e-4, 0, 0);
    SO3 SO3_updated = SO3::exp(update_so3) * SO3_R;
    cout << "SO3 updated = " << SO3_updated << endl;

    cout << "************ 我是分割线 *************" << endl;
    Vector3d t(1, 0, 0);
    SE3 SE3_Rt(R, t);
    SE3 SE3_qt(q, t);
    cout << "SE3 from R, t = " << endl << SE3_Rt << endl;
    cout << "SE3 from q, t = " << endl << SE3_qt << endl;
    typedef Matrix<double, 6, 1> Vector6d;
    Vector6d se3 = SE3_Rt.log();
    cout << "se3 = " << se3.transpose() << endl;
    cout << "se3 hat = " << endl << SE3::hat(se3) << endl;
    cout << "se3 hat vee = " << endl << SE3::vee(SE3:hat(se3)).transpose() << endl;

    Vector6d update_se3;
    update_se3.setZero();
    update_se3(0, 0) = 1e-4d;
    SE3 SE3_updated = SE3::exp(update_se3) * SE3_Rt;
    cout << "SE3 updated = " << endl << SE3_updated.matrix() << endl;

    return 0;
}