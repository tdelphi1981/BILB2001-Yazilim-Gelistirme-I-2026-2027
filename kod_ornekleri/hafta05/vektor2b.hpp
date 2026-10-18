// YGI/kod_ornekleri/hafta05/vektor2b.hpp
// geometri::Nokta (hafta02/nokta.hpp) ile ayni ad uzayinda kiz kardes tip.
// Nokta ve topla() bu hafta DEGISTIRILMEZ; burada yalniz Vektor2B eklenir.
#pragma once

#include <array>
#include <compare>
#include <iosfwd>

namespace geometri {

class Vektor2B {
public:
    // BEGIN yapicilar
    explicit Vektor2B(int x = 0, int y = 0);
    // END yapicilar

    // BEGIN aritmetik_bildirim
    Vektor2B operator+(const Vektor2B& sag) const;
    Vektor2B operator-(const Vektor2B& sag) const;
    Vektor2B operator*(int katsayi) const;
    Vektor2B& operator+=(const Vektor2B& sag);
    // END aritmetik_bildirim

    // BEGIN karsilastirma_bildirim
    bool operator==(const Vektor2B&) const = default;
    auto operator<=>(const Vektor2B&) const = default;
    // END karsilastirma_bildirim

    // BEGIN indeksleme_bildirim
    int& operator[](int indeks);
    int operator[](int indeks) const;
    // END indeksleme_bildirim

    // BEGIN akis_friend
    friend std::ostream& operator<<(std::ostream& cikis, const Vektor2B& v);
    friend std::istream& operator>>(std::istream& giris, Vektor2B& v);
    // END akis_friend

private:
    // BEGIN alanlar
    std::array<int, 2> bilesenler_;
    // END alanlar
};

// BEGIN carpma_serbest_bildirim
Vektor2B operator*(int katsayi, const Vektor2B& v);
// END carpma_serbest_bildirim

} // namespace geometri
