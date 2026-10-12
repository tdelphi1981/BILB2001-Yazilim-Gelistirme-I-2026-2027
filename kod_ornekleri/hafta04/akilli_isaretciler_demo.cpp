// YGI/kod_ornekleri/hafta04/akilli_isaretciler_demo.cpp
#include "akilli_tampon.hpp"
#include "int_tampon.hpp"
#include <iostream>
#include <memory>
#include <utility>

int main() {
// BEGIN unique_demo
    std::cout << "-- unique_ptr demo --\n";
    araclar::AkilliTampon a(5);
    for (int i = 0; i < a.boyut(); ++i) {
        a[i] = i * 10;
    }
    araclar::AkilliTampon b = std::move(a); // sahiplik b'ye tasinir
    std::cout << "b: ";
    for (int i = 0; i < b.boyut(); ++i) {
        std::cout << b[i] << " ";
    }
    std::cout << "\n";
    // Asagidaki satir DERLENMEZ: unique_ptr uyesi kopyalanamaz oldugu
    // icin AkilliTampon de kendiliginden kopyalanamaz hale gelir:
    // araclar::AkilliTampon c = b;
// END unique_demo

// BEGIN shared_demo
    std::cout << "-- shared_ptr demo --\n";
    auto p1 = std::make_shared<araclar::IntTampon>(5);
    std::cout << "p1.use_count()=" << p1.use_count() << "\n";
    {
        auto p2 = p1; // paylasilan sahiplik, sayac artar
        std::cout << "p1.use_count()=" << p1.use_count()
                   << " p2.use_count()=" << p2.use_count() << "\n";
    } // p2 kapsam disina cikar, sayac azalir
    std::cout << "p1.use_count()=" << p1.use_count() << "\n";
// END shared_demo

    return 0;
}
