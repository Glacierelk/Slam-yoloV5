# CMake generated Testfile for 
# Source directory: /home/glacier-elk/Downloads/opencv-3.4.16/modules/highgui
# Build directory: /home/glacier-elk/Downloads/opencv-3.4.16/build/modules/highgui
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_highgui "/home/glacier-elk/Downloads/opencv-3.4.16/build/bin/opencv_test_highgui" "--gtest_output=xml:opencv_test_highgui.xml")
set_tests_properties(opencv_test_highgui PROPERTIES  LABELS "Main;opencv_highgui;Accuracy" WORKING_DIRECTORY "/home/glacier-elk/Downloads/opencv-3.4.16/build/test-reports/accuracy" _BACKTRACE_TRIPLES "/home/glacier-elk/Downloads/opencv-3.4.16/cmake/OpenCVUtils.cmake;1686;add_test;/home/glacier-elk/Downloads/opencv-3.4.16/cmake/OpenCVModule.cmake;1292;ocv_add_test_from_target;/home/glacier-elk/Downloads/opencv-3.4.16/modules/highgui/CMakeLists.txt;177;ocv_add_accuracy_tests;/home/glacier-elk/Downloads/opencv-3.4.16/modules/highgui/CMakeLists.txt;0;")
