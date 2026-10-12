// YGI/kod_ornekleri/hafta04/rule_of_3_demo.cpp
#include "rule_of_3_ornekleri.hpp"
#include <iostream>

int main() {
// BEGIN default_delete_demo
    std::cout << "-- Sayac (=default) --\n";
    araclar::Sayac s1(5);
    araclar::Sayac s2 = s1; // kopya kurucu = default, sorunsuz calisir
    s2.artir();
    std::cout << "s1.deger()=" << s1.deger() << " s2.deger()=" << s2.deger() << "\n";

    std::cout << "-- TekilKart (=delete) --\n";
    araclar::TekilKart k1(42);
    std::cout << "k1.numara()=" << k1.numara() << "\n";
    // Asagidaki satir KASITLI OLARAK yorumda birakilmistir; acilirsa
    // derleme hatasi verir (kopya kurucu = delete edildigi icin):
    // araclar::TekilKart k2 = k1;
// END default_delete_demo

    return 0;
}
