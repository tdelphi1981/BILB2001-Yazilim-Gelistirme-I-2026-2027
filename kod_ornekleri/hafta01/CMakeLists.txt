# YGI/kod_ornekleri/hafta01/CMakeLists.txt
cmake_minimum_required(VERSION 3.20)
project(hafta01_temel CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(nokta_demo nokta_demo.cpp nokta.cpp)
