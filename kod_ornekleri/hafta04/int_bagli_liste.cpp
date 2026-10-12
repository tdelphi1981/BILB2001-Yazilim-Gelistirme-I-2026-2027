// YGI/kod_ornekleri/hafta04/int_bagli_liste.cpp
#include "int_bagli_liste.hpp"
#include <iostream>

namespace araclar {

// BEGIN ekle_govde
void IntBagliListe::ekleBasa(int deger) {
    auto yeniDugum = std::make_unique<Dugum>();
    yeniDugum->deger = deger;
    yeniDugum->sonraki = std::move(bas_); // eski bas, yeni dugumun sonrakisi olur
    bas_ = std::move(yeniDugum);          // sahiplik yeni dugume kayar
}
// END ekle_govde

// BEGIN yazdir_govde
void IntBagliListe::yazdir() const {
    const Dugum* gozlemci = bas_.get(); // sahiplik almayan gozlemci isaretci
    while (gozlemci != nullptr) {
        std::cout << gozlemci->deger << " -> ";
        gozlemci = gozlemci->sonraki.get();
    }
    std::cout << "nullptr\n";
}
// END yazdir_govde

} // namespace araclar
