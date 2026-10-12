// YGI/kod_ornekleri/hafta04/int_tampon.cpp
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

// BEGIN kopya_kurucu_govde
IntTampon::IntTampon(const IntTampon& diger) {
    boyut = diger.boyut;
    veri = new int[boyut];
    for (int i = 0; i < boyut; ++i) {
        veri[i] = diger.veri[i];
    }
    std::cout << "tampon kopyalandi (derin kopya, boyut=" << boyut << ")\n";
}
// END kopya_kurucu_govde

// BEGIN kopya_atama_govde
IntTampon& IntTampon::operator=(const IntTampon& diger) {
    if (this == &diger) {
        return *this; // oz-atama kontrolu
    }
    delete[] veri; // eski kaynak birakilir
    boyut = diger.boyut;
    veri = new int[boyut];
    for (int i = 0; i < boyut; ++i) {
        veri[i] = diger.veri[i];
    }
    std::cout << "tampon atandi (derin kopya, boyut=" << boyut << ")\n";
    return *this;
}
// END kopya_atama_govde

} // namespace araclar
