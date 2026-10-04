// YGI/kod_ornekleri/hafta02/int_tampon_demo.cpp
#include "int_tampon.hpp"
#include <iostream>

int main() {
// BEGIN elle_yonetim
    std::cout << "-- elle yonetim --\n";
    int* elleTampon = new int[5];
    for (int i = 0; i < 5; ++i) {
        elleTampon[i] = i * i;
    }
    std::cout << "elle tampon dolduruldu\n";
    // Not: burada delete[] cagrisi UNUTULURSA bellek sizintisi olusur.
    delete[] elleTampon;
    std::cout << "elle tampon serbest birakildi\n";
// END elle_yonetim

// BEGIN raii_demo
    std::cout << "-- RAII demo --\n";
    {
        araclar::IntTampon tampon(5);
        for (int i = 0; i < tampon.boyut; ++i) {
            tampon.veri[i] = i * i;
        }
        std::cout << "tampon kullaniliyor\n";
    } // blok sonu: yikici otomatik calisir, tampon kendini temizler
    std::cout << "blok disina cikildi\n";
// END raii_demo

    return 0;
}
