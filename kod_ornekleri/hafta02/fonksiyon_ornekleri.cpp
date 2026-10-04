// YGI/kod_ornekleri/hafta02/fonksiyon_ornekleri.cpp
#include <iostream>

// BEGIN asiri_yukleme
int alan(int kenar) {
    return kenar * kenar;
}

int alan(int taban, int yukseklik) {
    return taban * yukseklik;
}

double alan(double yaricap) {
    return 3.14159 * yaricap * yaricap;
}
// END asiri_yukleme

// BEGIN varsayilan_parametre
long guc(int taban, int us = 2) {
    long sonuc = 1;
    for (int i = 0; i < us; ++i) {
        sonuc *= taban;
    }
    return sonuc;
}
// END varsayilan_parametre

int main() {
    std::cout << "kare alani (kenar=4): " << alan(4) << '\n';
    std::cout << "dikdortgen alani (3x5): " << alan(3, 5) << '\n';
    std::cout << "daire alani (r=2.0): " << alan(2.0) << '\n';

    std::cout << "guc(3) [varsayilan us=2]: " << guc(3) << '\n';
    std::cout << "guc(3, 3) [us=3]: " << guc(3, 3) << '\n';

    return 0;
}
