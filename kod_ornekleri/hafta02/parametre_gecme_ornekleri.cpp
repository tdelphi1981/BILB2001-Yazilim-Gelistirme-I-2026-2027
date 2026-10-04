// YGI/kod_ornekleri/hafta02/parametre_gecme_ornekleri.cpp
#include "nokta.hpp"
#include <iostream>

using geometri::Nokta;

// BEGIN deger_ile
void oteleDeger(Nokta n) {
    n.x += 10.0;
    n.y += 10.0;
}
// END deger_ile

// BEGIN referans_ile
void oteleReferans(Nokta& n) {
    n.x += 10.0;
    n.y += 10.0;
}
// END referans_ile

// BEGIN const_referans_ile
double oteleConstReferans(const Nokta& n) {
    // yalnizca okur; n uzerinde degisiklik yapamaz (const)
    return n.x + n.y;
}
// END const_referans_ile

// BEGIN isaretci_ile
void oteleIsaretci(Nokta* n) {
    if (n == nullptr) {
        return;
    }
    n->x += 10.0;
    n->y += 10.0;
}
// END isaretci_ile

// BEGIN karsilastirma_demo
int main() {
    Nokta baslangic{1.0, 1.0};

    Nokta degerNoktasi = baslangic;
    oteleDeger(degerNoktasi);
    std::cout << "deger ile     -> otelemeden sonra (degismedi): ";
    geometri::yazdir(degerNoktasi);
    std::cout << '\n';

    Nokta referansNoktasi = baslangic;
    oteleReferans(referansNoktasi);
    std::cout << "referans ile  -> otelemeden sonra (degisti)  : ";
    geometri::yazdir(referansNoktasi);
    std::cout << '\n';

    Nokta constNoktasi = baslangic;
    double toplam = oteleConstReferans(constNoktasi);
    std::cout << "const ref ile -> nokta degismedi, okundu     : ";
    geometri::yazdir(constNoktasi);
    std::cout << " (x+y=" << toplam << ")\n";

    Nokta isaretciNoktasi = baslangic;
    oteleIsaretci(&isaretciNoktasi);
    std::cout << "isaretci ile  -> otelemeden sonra (degisti)  : ";
    geometri::yazdir(isaretciNoktasi);
    std::cout << '\n';

    return 0;
}
// END karsilastirma_demo
