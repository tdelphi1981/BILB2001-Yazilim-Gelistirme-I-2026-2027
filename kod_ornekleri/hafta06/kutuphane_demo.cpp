// YGI/kod_ornekleri/hafta06/kutuphane_demo.cpp - Unite 4 kullanimi
#include "materyal.hpp"

#include <iostream>
#include <memory>

int main() {
    using namespace kitaplik;

    // BEGIN kutuphane_kullanim
    Kutuphane k;
    k.ekle(std::make_unique<BasiliKitap>(
        "Etkili C++", Yazar("Scott Meyers", "ABD"), 2005, 320));
    k.ekle(std::make_unique<EKitap>("C++ Temelleri",
                                    Yazar("Ayse Yilmaz", "TR"), 2020, 4.5));
    k.ekle(std::make_unique<SesliKitap>("Kisa Hikayeler",
                                        Yazar("Mehmet Demir", "TR"), 2019, 180,
                                        "Ali Kaya"));

    k.hepsiniYazdir();
    // END kutuphane_kullanim

    return 0;
}
