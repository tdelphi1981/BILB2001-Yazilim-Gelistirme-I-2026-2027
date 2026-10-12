// YGI/kod_ornekleri/hafta04/int_bagli_liste.hpp
#pragma once
#include <memory>

namespace araclar {

class IntBagliListe {
public:
// BEGIN arayuz
    IntBagliListe() = default;
    void ekleBasa(int deger);
    void yazdir() const;
    bool bosMu() const { return bas_ == nullptr; }
// END arayuz

private:
// BEGIN dugum
    struct Dugum {
        int deger;
        std::unique_ptr<Dugum> sonraki;
    };
// END dugum

// BEGIN alanlar
    std::unique_ptr<Dugum> bas_;
// END alanlar
};

} // namespace araclar
