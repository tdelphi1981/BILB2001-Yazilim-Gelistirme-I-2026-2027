// YGI/kod_ornekleri/hafta03/kitap.cpp
#include "kitap.hpp"
#include <iostream>
namespace kitaplik {
// BEGIN kurucu
Kitap::Kitap(std::string baslik, std::string yazar, std::string isbn, int yil)
    : baslik_(std::move(baslik)), yazar_(std::move(yazar)),
      isbn_(std::move(isbn)), yil_(yil) {}
// END kurucu
// BEGIN gecerlimi
bool Kitap::gecerliMi() const {
    return !baslik_.empty() && isbn_.size() == 13 && yil_ > 0;
}
// END gecerlimi
void Kitap::setYil(int yil) { if (yil > 0) yil_ = yil; }
// BEGIN yazdir
void Kitap::yazdir() const {
    std::cout << baslik_ << " — " << yazar_
              << " (" << yil_ << "), ISBN: " << isbn_ << '\n';
}
// END yazdir
} // namespace kitaplik
