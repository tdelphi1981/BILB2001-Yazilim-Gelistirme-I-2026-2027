// YGI/kod_ornekleri/hafta02/bellek_modeli_ornekleri.cpp
#include "nokta.hpp"
#include <iostream>

using geometri::Nokta;

// BEGIN stack_omur
void stackOrnegi() {
    Nokta yerel{5.0, 5.0};
    std::cout << "stack nesnesi adresi: " << &yerel << '\n';
}
// END stack_omur

// BEGIN new_delete_tek
void newDeleteOrnegi() {
    Nokta* dinamik = new Nokta{7.0, 7.0};
    std::cout << "dinamik nesne adresi: " << dinamik << '\n';
    delete dinamik;
    dinamik = nullptr;
}
// END new_delete_tek

// BEGIN nullptr_kontrol
void nullptrKontrolOrnegi() {
    Nokta* p = nullptr;
    if (p == nullptr) {
        std::cout << "isaretci bos (nullptr), erisim yapilmiyor\n";
    } else {
        std::cout << "isaretci dolu: " << p->x << '\n';
    }
}
// END nullptr_kontrol

// BEGIN bellek_sizintisi
// DIKKAT: bu fonksiyon KASITLI olarak hatalidir; main() tarafindan CAGRILMAZ.
// new ile ayrilan bellegin karsiligi hicbir zaman delete edilmiyor.
void sizintiOrnegi() {
    Nokta* p = new Nokta{1.0, 1.0};
    p = new Nokta{2.0, 2.0}; // ilk ayrilan adres burada kaybolur, artik delete edilemez
    // delete p; // <- kasitli olarak cagrilmadi: bellek sizintisi bu satirin eksikliginden dogar
    (void)p;
}
// END bellek_sizintisi

// BEGIN sarkan_isaretci
// DIKKAT: bu fonksiyon KASITLI olarak sarkan isaretci DESENINI gosterir;
// main() tarafindan CAGRILMAZ ve p uzerinden gercek bir erisim (dereference) YAPILMAZ.
void sarkanOrnegi() {
    Nokta* p = new Nokta{3.0, 3.0};
    delete p;
    // p artik sarkan (dangling) bir isaretci: delete edilmis bellegi gosteriyor.
    // Iyi aliskanlik: delete sonrasi "p = nullptr;" yapmaktir (burada bilerek atlandi).
    // p->x = 9.0; // <- YAPILMAMALIDIR: tanimsiz davranis (UB); bu satir hicbir zaman calismaz.
}
// END sarkan_isaretci

int main() {
    stackOrnegi();
    newDeleteOrnegi();
    nullptrKontrolOrnegi();
    // sizintiOrnegi() ve sarkanOrnegi() bilerek CAGRILMAZ; yalnizca kod deseni icin var.
    return 0;
}
