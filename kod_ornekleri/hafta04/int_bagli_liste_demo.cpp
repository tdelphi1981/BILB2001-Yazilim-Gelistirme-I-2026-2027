// YGI/kod_ornekleri/hafta04/int_bagli_liste_demo.cpp
#include "int_bagli_liste.hpp"

int main() {
// BEGIN demo
    araclar::IntBagliListe liste;
    liste.ekleBasa(3);
    liste.ekleBasa(2);
    liste.ekleBasa(1);
    liste.yazdir();
// END demo

    return 0;
}
