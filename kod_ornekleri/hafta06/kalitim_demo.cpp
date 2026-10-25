// YGI/kod_ornekleri/hafta06/kalitim_demo.cpp - Unite 1-2 kullanimi
#include "materyal.hpp"

#include <iostream>

int main() {
    using namespace kitaplik;

    // BEGIN kalitim_temel
    BasiliKitap bk("Etkili C++", Yazar("Scott Meyers", "ABD"), 2005, 320);
    std::cout << "Devralinan baslik(): " << bk.baslik() << '\n';
    bk.yazdir();
    // END kalitim_temel

    std::cout << '\n';

    // BEGIN kurucu_yikici_sira
    std::cout << "-- kapsam basliyor --\n";
    {
        BasiliKitap gecici("Temiz Kod", Yazar("Robert C. Martin", "ABD"), 2008,
                            464);
    }
    std::cout << "-- kapsam bitti --\n";
    // END kurucu_yikici_sira

    std::cout << '\n';

    // BEGIN dilimleme
    Materyal m = bk; // slicing: yalniz Materyal alt-nesnesi kopyalanir
    std::cout << "m.yazdir()  (dilimlenmis, taban surumu) : ";
    m.yazdir();
    std::cout << "bk.yazdir() (turetilmis surumu)          : ";
    bk.yazdir();
    // END dilimleme

    return 0;
}
