// YGI/kod_ornekleri/hafta04/akilli_tampon.hpp
#pragma once
#include <memory>

namespace araclar {

// BEGIN akilli_tanim
class AkilliTampon {
public:
    explicit AkilliTampon(int n);
    int boyut() const { return boyut_; }
    int& operator[](int i) { return veri_[i]; }
    int operator[](int i) const { return veri_[i]; }

private:
    std::unique_ptr<int[]> veri_;
    int boyut_;
};
// END akilli_tanim

} // namespace araclar
