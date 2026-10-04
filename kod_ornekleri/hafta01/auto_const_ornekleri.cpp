// YGI/kod_ornekleri/hafta01/auto_const_ornekleri.cpp
#include <iostream>
#include <string>

// BEGIN const_ornek
void mesajYazdir(const std::string& mesaj) {
    std::cout << mesaj << '\n';
}
// END const_ornek

int main() {
// BEGIN auto_ornek
    auto a = 7;
    auto b = 35;
    auto toplam = a + b;
    std::cout << "Toplam: " << toplam << '\n';
// END auto_ornek

    mesajYazdir("Bu mesaj degistirilemez.");

// BEGIN donguornek
    int sayilar[] = {10, 20, 30, 40};
    for (int sayi : sayilar) {
        std::cout << sayi << '\n';
    }
// END donguornek

    return 0;
}
