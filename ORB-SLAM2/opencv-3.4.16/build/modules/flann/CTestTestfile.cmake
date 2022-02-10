# CMake generated Testfile for 
# Source directory: /home/glacier-elk/Downloads/opencv-3.4.16/modules/flann
# Build directory: /home/glacier-elk/Downloads/opencv-3.4.16/build/modules/flann
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_flann "/home/glacier-elk/Downloads/opencv-3.4.16/build/bin/opencv_test_flann" "--gtest_output=xml:opencv_test_flann.xml")
set_tests_properties(opencv_test_flann PROPERTIES  LABELS "Main;opencv_flann;Accuracy" WORKING_DIRECTORY "/home/glacier-elk/Downloads/opencv-3.4.16/build/test-reports/accuracy" _BACKTRACE_TRIPLES "/home/glacier-elk/Downloads/opencv-3.4.16/cmake/OpenCVUtils.cmake;1686;add_test;/home/glacier-elk/Downloads/opencv-3.4.16/cmake/OpenCVModule.cmake;1292;ocv_add_test_from_target;/home/glacier-elk/Downloads/opencv-3.4.16/cmake/OpenCVModule.cmake;1074;ocv_add_accuracy_tests;/home/glacier-elk/Downloads/opencv-3.4.16/modules/flann/CMakeLists.txt;2;ocv_define_module;/home/glacier-elk/Downloads/opencv-3.4.16/modules/flann/CMakeLists.txt;0;")
