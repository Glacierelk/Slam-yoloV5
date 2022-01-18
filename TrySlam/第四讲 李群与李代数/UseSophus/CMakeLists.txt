project (UseSophus)

add_executable (useSophus useSophus.cpp)

include_directories (${workspaceFolder})
include_directories ("/usr/include/eigen3")

find_package( Sophus REQUIRED )
include_directories (${Sophus_INCLUDE_DIRS})
target_link_libraries (useSophus ${Sophus_LIBRARIES})
target_link_libraries (useSophus Sophus::Sophus )