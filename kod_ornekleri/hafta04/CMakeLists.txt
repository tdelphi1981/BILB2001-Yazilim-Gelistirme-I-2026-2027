# YGI/kod_ornekleri/hafta04/CMakeLists.txt
cmake_minimum_required(VERSION 3.20)
project(hafta04_temel CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(int_tampon_kopya_demo int_tampon_kopya_demo.cpp int_tampon.cpp)
add_executable(rule_of_3_demo rule_of_3_demo.cpp)
add_executable(akilli_isaretciler_demo akilli_isaretciler_demo.cpp akilli_tampon.cpp int_tampon.cpp)
add_executable(int_bagli_liste_demo int_bagli_liste_demo.cpp int_bagli_liste.cpp)
