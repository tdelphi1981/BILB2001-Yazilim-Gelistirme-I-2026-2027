# YGI/kod_ornekleri/hafta06/CMakeLists.txt
cmake_minimum_required(VERSION 3.20)
project(hafta06_kalitim CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(kalitim_demo kalitim_demo.cpp materyal.cpp)
add_executable(polimorfizm_demo polimorfizm_demo.cpp materyal.cpp)
add_executable(kutuphane_demo kutuphane_demo.cpp materyal.cpp)
