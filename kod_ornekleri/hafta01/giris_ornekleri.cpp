// YGI/kod_ornekleri/hafta01/giris_ornekleri.cpp
#include <iostream>
#include <string>

// BEGIN referans_ornek
void ikiyeKatla(int& sayi) {
    sayi = sayi * 2;
}

void referansOrnegiCalistir() {
    int sayi = 21;
    ikiyeKatla(sayi);
    std::cout << "Ikiye katlanan sayi: " << sayi << '\n';
}
// END referans_ornek

int main() {
// BEGIN cinput
    std::string isim;
    std::cout << "Adiniz nedir? ";
    std::cin >> isim;
    std::cout << "Merhaba, " << isim << "!\n";
// END cinput

// BEGIN string_ornek
    std::string ad = "Ada";
    std::string soyad = "Lovelace";
    std::string tamAd = ad + " " + soyad;
    std::cout << tamAd << " (" << tamAd.size() << " karakter)\n";
// END string_ornek

    referansOrnegiCalistir();

    return 0;
}
