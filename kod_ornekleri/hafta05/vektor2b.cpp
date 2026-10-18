// YGI/kod_ornekleri/hafta05/vektor2b.cpp
#include "vektor2b.hpp"

#include <istream>
#include <ostream>

namespace geometri {

// BEGIN yapici_govde
Vektor2B::Vektor2B(int x, int y) : bilesenler_{x, y} {}
// END yapici_govde

// BEGIN toplama_govde
Vektor2B Vektor2B::operator+(const Vektor2B& sag) const {
    return Vektor2B(bilesenler_[0] + sag.bilesenler_[0],
                     bilesenler_[1] + sag.bilesenler_[1]);
}
// END toplama_govde

// BEGIN cikarma_govde
Vektor2B Vektor2B::operator-(const Vektor2B& sag) const {
    return Vektor2B(bilesenler_[0] - sag.bilesenler_[0],
                     bilesenler_[1] - sag.bilesenler_[1]);
}
// END cikarma_govde

// BEGIN carpma_govde
Vektor2B Vektor2B::operator*(int katsayi) const {
    return Vektor2B(bilesenler_[0] * katsayi, bilesenler_[1] * katsayi);
}
// END carpma_govde

// BEGIN bilesik_atama_govde
Vektor2B& Vektor2B::operator+=(const Vektor2B& sag) {
    bilesenler_[0] += sag.bilesenler_[0];
    bilesenler_[1] += sag.bilesenler_[1];
    return *this;
}
// END bilesik_atama_govde

// BEGIN carpma_serbest_govde
// friend DEGILDIR: yalniz Vektor2B'nin public operator*'ina devreder.
Vektor2B operator*(int katsayi, const Vektor2B& v) {
    return v * katsayi;
}
// END carpma_serbest_govde

// BEGIN indeksleme_govde
int& Vektor2B::operator[](int indeks) {
    // On kosul: indeks yalniz 0 ya da 1 olmalidir (hata yonetimi Hafta 13).
    return bilesenler_[static_cast<std::size_t>(indeks)];
}

int Vektor2B::operator[](int indeks) const {
    return bilesenler_[static_cast<std::size_t>(indeks)];
}
// END indeksleme_govde

// BEGIN cikis_govde
std::ostream& operator<<(std::ostream& cikis, const Vektor2B& v) {
    cikis << '(' << v.bilesenler_[0] << ", " << v.bilesenler_[1] << ')';
    return cikis;
}
// END cikis_govde

// BEGIN giris_govde
std::istream& operator>>(std::istream& giris, Vektor2B& v) {
    giris >> v.bilesenler_[0] >> v.bilesenler_[1];
    return giris;
}
// END giris_govde

} // namespace geometri
