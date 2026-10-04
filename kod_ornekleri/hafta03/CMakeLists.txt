# YGI/kod_ornekleri/hafta03/CMakeLists.txt
cmake_minimum_required(VERSION 3.20)
project(hafta03_kitap CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(kitap_demo kitap_demo.cpp kitap.cpp)
