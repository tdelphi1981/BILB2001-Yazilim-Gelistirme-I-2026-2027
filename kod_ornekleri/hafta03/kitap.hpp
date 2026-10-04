// YGI/kod_ornekleri/hafta03/kitap.hpp
#pragma once
#include <string>
namespace kitaplik {
class Kitap {
public:
    // BEGIN arayuz
    Kitap(std::string baslik, std::string yazar, std::string isbn, int yil);
    const std::string& baslik() const { return baslik_; }
    void setYil(int yil);
    bool gecerliMi() const;
    void yazdir() const;
    // END arayuz
private:
    // BEGIN alanlar
    std::string baslik_;
    std::string yazar_;
    std::string isbn_;
    int         yil_;
    // END alanlar
};
} // namespace kitaplik
