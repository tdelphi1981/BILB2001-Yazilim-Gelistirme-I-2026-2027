// YGI/kod_ornekleri/hafta04/akilli_tampon.cpp
#include "akilli_tampon.hpp"
#include <iostream>

namespace araclar {

// BEGIN akilli_kurucu_govde
AkilliTampon::AkilliTampon(int n)
    : veri_(std::make_unique<int[]>(n)), boyut_(n) {
    std::cout << "akilli tampon olusturuldu (boyut=" << boyut_ << ")\n";
}
// END akilli_kurucu_govde

} // namespace araclar
