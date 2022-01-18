project( EIGEN )

add_executable( eigen eigen.cpp )

include_directories( "/usr/include/eigen3" )
include_directories( "${workspaceFolder}/**" )
