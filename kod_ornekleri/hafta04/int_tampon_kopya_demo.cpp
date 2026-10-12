// YGI/kod_ornekleri/hafta04/int_tampon_kopya_demo.cpp
#include "int_tampon.hpp"
#include <iostream>
#include <utility>

int main() {
// BEGIN kopya_demo
    std::cout << "-- kopya kurucu demo --\n";
    araclar::IntTampon a(3);
    for (int i = 0; i < a.boyut; ++i) {
        a.veri[i] = i + 1; // a = {1,2,3}
    }
    araclar::IntTampon b = a; // kopya kurucu cagrilir (derin kopya)
    a.veri[0] = 99;           // yalnizca a degisir
    std::cout << "a.veri[0]=" << a.veri[0] << " b.veri[0]=" << b.veri[0] << "\n";
// END kopya_demo

// BEGIN atama_demo
    std::cout << "-- kopya atama demo --\n";
    araclar::IntTampon c(3);
    c = a; // kopya atama operatoru cagrilir (derin kopya)
    a.veri[1] = 42; // yalnizca a tekrar degisir, c etkilenmez
    std::cout << "a.veri[1]=" << a.veri[1] << " c.veri[1]=" << c.veri[1] << "\n";
// END atama_demo

// BEGIN sig_kopya_riski
    // Not: IntTampon icin kullanici tanimli kopya kurucu/atama olmasaydi,
    // derleyici varsayilan (sig/uye-uye) kopyayi uretirdi. O durumda
    // `araclar::IntTampon x = a;` ifadesinde x.veri ve a.veri AYNI heap
    // adresini gosterirdi (yalnizca isaretci/adres kopyalanir, isaret
    // edilen veri kopyalanmaz). Ikisi de kapsam disina ciktiginda ayni
    // bellek blogu iki kez `delete[]` edilirdi (cifte delete, tanimsiz
    // davranis). Bu kesit yalnizca desen/aciklama icindir; gercek bir
    // tanimsiz davranis burada TETIKLENMEZ.
// END sig_kopya_riski

// BEGIN move_kutusu
    std::cout << "-- tasima onizleme --\n";
    araclar::IntTampon d(std::move(c));
    // Not: IntTampon icin kullanici tanimli bir tasima kurucusu YAZILMADI;
    // std::move(c) yine de derlenir ama burada -- tasima kurucusu
    // olmadigi icin -- kopya kurucuya duser (guvenli, fakat gereksiz bir
    // derin kopya yapilir; verimsiz). c bu yuzden hala gecerli kalir.
    std::cout << "d.veri[1]=" << d.veri[1] << "\n";
// END move_kutusu

    return 0;
}
