project( Eigen_Geometric_Module )

add_executable(eigenGeometricModule eigenGeometric.cpp)

include_directories("/usr/include/eigen3")
include_directories("${workspaceFolder}/**")