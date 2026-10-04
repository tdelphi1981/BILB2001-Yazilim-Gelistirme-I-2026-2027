// YGI/kod_ornekleri/hafta03/kitap_demo.cpp
#include "kitap.hpp"
int main() {
// BEGIN demo
    kitaplik::Kitap k{"Nutuk", "Mustafa Kemal", "9789751000000", 1927};
    if (k.gecerliMi()) k.yazdir();
// END demo
    return 0;
}
