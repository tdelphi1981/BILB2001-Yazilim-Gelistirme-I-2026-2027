// YGI/kod_ornekleri/hafta02/int_tampon.cpp
#include "int_tampon.hpp"
#include <iostream>

namespace araclar {

// BEGIN kurucu_govde
IntTampon::IntTampon(int n) {
    veri = new int[n];
    boyut = n;
    std::cout << "tampon olusturuldu (boyut=" << boyut << ")\n";
}
// END kurucu_govde

// BEGIN yikici_govde
IntTampon::~IntTampon() {
    delete[] veri;
    std::cout << "tampon temizlendi\n";
}
// END yikici_govde

} // namespace araclar
