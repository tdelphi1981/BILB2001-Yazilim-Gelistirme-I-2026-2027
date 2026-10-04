// YGI/kod_ornekleri/hafta02/int_tampon.hpp
#pragma once

namespace araclar {

struct IntTampon {
// BEGIN yapi
    int* veri;
    int boyut;
// END yapi
// BEGIN bildirimler
    IntTampon(int n);
    ~IntTampon();
// END bildirimler
};

} // namespace araclar
