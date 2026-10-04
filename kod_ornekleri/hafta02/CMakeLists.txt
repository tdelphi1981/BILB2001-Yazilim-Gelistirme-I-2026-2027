# YGI/kod_ornekleri/hafta02/CMakeLists.txt
cmake_minimum_required(VERSION 3.20)
project(hafta02_temel CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(fonksiyon_demo fonksiyon_ornekleri.cpp)
add_executable(parametre_demo parametre_gecme_ornekleri.cpp nokta.cpp)
add_executable(bellek_demo bellek_modeli_ornekleri.cpp nokta.cpp)
add_executable(int_tampon_demo int_tampon_demo.cpp int_tampon.cpp)
