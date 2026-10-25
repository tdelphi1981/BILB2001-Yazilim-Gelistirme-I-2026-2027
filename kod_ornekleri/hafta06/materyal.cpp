// YGI/kod_ornekleri/hafta06/materyal.cpp
#include "materyal.hpp"

#include <iostream>

namespace kitaplik {

// BEGIN materyal_kurucu
Materyal::Materyal(std::string baslik, Yazar yazar, int yil)
    : baslik_(std::move(baslik)), yazar_(std::move(yazar)), yil_(yil) {
    std::cout << "Materyal kuruldu\n";
}
// END materyal_kurucu

// BEGIN materyal_yazdir
void Materyal::yazdir() const {
    std::cout << "Materyal: \"" << baslik_ << "\" - " << yazar_.tamAd()
               << " (" << yil_ << ")\n";
}
// END materyal_yazdir

// BEGIN materyal_yikici
Materyal::~Materyal() {
    std::cout << "Materyal yikildi\n";
}
// END materyal_yikici

// BEGIN basilikitap_kurucu
BasiliKitap::BasiliKitap(std::string baslik, Yazar yazar, int yil,
                          int sayfaSayisi)
    : Materyal(std::move(baslik), std::move(yazar), yil),
      sayfaSayisi_(sayfaSayisi) {
    std::cout << "BasiliKitap kuruldu\n";
}
// END basilikitap_kurucu

// BEGIN basilikitap_yazdir
void BasiliKitap::yazdir() const {
    std::cout << "Basili Kitap: \"" << baslik_ << "\" - " << yazar_.tamAd()
               << " (" << yil_ << "), " << sayfaSayisi_ << " sayfa\n";
}
// END basilikitap_yazdir

BasiliKitap::~BasiliKitap() {
    std::cout << "BasiliKitap yikildi\n";
}

// BEGIN ekitap_kurucu
EKitap::EKitap(std::string baslik, Yazar yazar, int yil, double boyutMB)
    : Materyal(std::move(baslik), std::move(yazar), yil), boyutMB_(boyutMB) {
    std::cout << "EKitap kuruldu\n";
}
// END ekitap_kurucu

// BEGIN ekitap_yazdir
void EKitap::yazdir() const {
    std::cout << "E-Kitap: \"" << baslik_ << "\" - " << yazar_.tamAd()
               << " (" << yil_ << "), " << boyutMB_ << " MB\n";
}
// END ekitap_yazdir

EKitap::~EKitap() {
    std::cout << "EKitap yikildi\n";
}

// BEGIN seslikitap_kurucu
SesliKitap::SesliKitap(std::string baslik, Yazar yazar, int yil, int sureDk,
                        std::string seslendiren)
    : Materyal(std::move(baslik), std::move(yazar), yil), sureDk_(sureDk),
      seslendiren_(std::move(seslendiren)) {
    std::cout << "SesliKitap kuruldu\n";
}
// END seslikitap_kurucu

// BEGIN seslikitap_yazdir
void SesliKitap::yazdir() const {
    std::cout << "Sesli Kitap: \"" << baslik_ << "\" - " << yazar_.tamAd()
               << " (" << yil_ << "), " << sureDk_ << " dk, seslendiren: "
               << seslendiren_ << '\n';
}
// END seslikitap_yazdir

SesliKitap::~SesliKitap() {
    std::cout << "SesliKitap yikildi\n";
}

// BEGIN kutuphane_ekle
void Kutuphane::ekle(std::unique_ptr<Materyal> m) {
    raf_.push_back(std::move(m));
}
// END kutuphane_ekle

// BEGIN kutuphane_yazdir
void Kutuphane::hepsiniYazdir() const {
    for (const auto& m : raf_) {
        m->yazdir();
    }
}
// END kutuphane_yazdir

} // namespace kitaplik
