// YGI/kod_ornekleri/hafta04/int_tampon.hpp
#pragma once

namespace araclar {

struct IntTampon {
// BEGIN alanlar
    int* veri;
    int boyut;
// END alanlar
// BEGIN bildirimler_temel
    IntTampon(int n);
    ~IntTampon();
// END bildirimler_temel
// BEGIN bildirimler_kopya
    IntTampon(const IntTampon& diger);
    IntTampon& operator=(const IntTampon& diger);
// END bildirimler_kopya
};

} // namespace araclar
