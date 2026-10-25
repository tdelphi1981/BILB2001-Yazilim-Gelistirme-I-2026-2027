// YGI/kod_ornekleri/hafta06/polimorfizm_demo.cpp - Unite 3 kullanimi
#include "materyal.hpp"
#include "sekil.hpp"

#include <iostream>
#include <memory>

int main() {
    using namespace kitaplik;

    // BEGIN sanal_gonderim
    BasiliKitap bk("Etkili C++", Yazar("Scott Meyers", "ABD"), 2005, 320);
    EKitap ek("C++ Temelleri", Yazar("Ayse Yilmaz", "TR"), 2020, 4.5);
    SesliKitap sk("Kisa Hikayeler", Yazar("Mehmet Demir", "TR"), 2019, 180,
                  "Ali Kaya");

    Materyal& r = bk;
    std::cout << "Materyal& uzerinden (statik tip Materyal, dinamik tur "
                 "BasiliKitap):\n";
    r.yazdir();

    std::cout << "\nMateryal* dizisi uzerinden cokbicimli yazdirma:\n";
    Materyal* dizi[] = {&bk, &ek, &sk};
    for (Materyal* p : dizi) {
        p->yazdir();
    }
    // END sanal_gonderim

    std::cout << '\n';

    // BEGIN sanal_yikici
    std::cout << "-- unique_ptr<Materyal> olusturuluyor --\n";
    std::unique_ptr<Materyal> p = std::make_unique<BasiliKitap>(
        "Tasarim Desenleri", Yazar("Erich Gamma", "ABD"), 1994, 395);
    std::cout << "-- unique_ptr sifirlaniyor (yikim tetiklenir) --\n";
    p.reset();
    std::cout << "-- yikim tamamlandi --\n";
    // END sanal_yikici

    std::cout << '\n';

    // BEGIN soyut_kullanim
    // Sekil gov;  // DERLEME HATASI: soyut sinif (saf sanal alan()) dogrudan
    //             // orneklenemez.
    Daire d(3.0);
    Kare kr(4.0);
    Sekil* sekiller[] = {&d, &kr};
    for (Sekil* s : sekiller) {
        std::cout << "alan = " << s->alan() << '\n';
    }
    // END soyut_kullanim

    return 0;
}
