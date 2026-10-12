// YGI/kod_ornekleri/hafta04/rule_of_3_ornekleri.hpp
#pragma once

namespace araclar {

// BEGIN sayac_default
class Sayac {
public:
    explicit Sayac(int baslangic = 0) : deger_(baslangic) {}
    Sayac(const Sayac&) = default;
    Sayac& operator=(const Sayac&) = default;
    int deger() const { return deger_; }
    void artir() { ++deger_; }

private:
    int deger_;
};
// END sayac_default

// BEGIN tekilkart_delete
class TekilKart {
public:
    explicit TekilKart(int numara) : numara_(numara) {}
    TekilKart(const TekilKart&) = delete;
    TekilKart& operator=(const TekilKart&) = delete;
    int numara() const { return numara_; }

private:
    int numara_;
};
// END tekilkart_delete

} // namespace araclar
