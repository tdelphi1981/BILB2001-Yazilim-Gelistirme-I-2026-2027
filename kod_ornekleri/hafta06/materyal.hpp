// YGI/kod_ornekleri/hafta06/materyal.hpp
// kitaplik::Kitap (hafta03/kitap.hpp) ile ayni ad uzayinda kardes hiyerarsi.
// kitap.hpp/kitap.cpp bu hafta DEGISTIRILMEZ; Materyal hiyerarsisi burada,
// ayri dosyalarda kurulur. Materyal bu hafta SOMUT (concrete) tabandir.
#pragma once

#include <memory>
#include <string>
#include <vector>

namespace kitaplik {

// BEGIN yazar_sinif
// has-a: Materyal bir Yazar DEGILDIR, bir Yazar'a sahiptir (kompozisyon).
class Yazar {
public:
    Yazar(std::string ad, std::string ulke)
        : ad_(std::move(ad)), ulke_(std::move(ulke)) {}

    const std::string& ad() const { return ad_; }
    const std::string& ulke() const { return ulke_; }
    std::string tamAd() const { return ad_ + " (" + ulke_ + ")"; }

private:
    std::string ad_;
    std::string ulke_;
};
// END yazar_sinif

// BEGIN materyal_taban
// Somut taban: yazdir() virtual'dir ama saf sanal DEGILDIR (Materyal m = bk;
// derlenir ve nesne dilimlemesi gozlenebilir kalir).
class Materyal {
public:
    Materyal(std::string baslik, Yazar yazar, int yil);
    const std::string& baslik() const { return baslik_; }
    virtual void yazdir() const;
    virtual ~Materyal();

protected:
    std::string baslik_;
    Yazar yazar_;
    int yil_;
};
// END materyal_taban

// BEGIN basilikitap
class BasiliKitap : public Materyal {
public:
    BasiliKitap(std::string baslik, Yazar yazar, int yil, int sayfaSayisi);
    void yazdir() const override;
    ~BasiliKitap() override;

private:
    int sayfaSayisi_;
};
// END basilikitap

// BEGIN ekitap
class EKitap : public Materyal {
public:
    EKitap(std::string baslik, Yazar yazar, int yil, double boyutMB);
    void yazdir() const override;
    ~EKitap() override;

private:
    double boyutMB_;
};
// END ekitap

// BEGIN seslikitap
class SesliKitap : public Materyal {
public:
    SesliKitap(std::string baslik, Yazar yazar, int yil, int sureDk,
               std::string seslendiren);
    void yazdir() const override;
    ~SesliKitap() override;

private:
    int sureDk_;
    std::string seslendiren_;
};
// END seslikitap

// BEGIN kutuphane
// has-a: Kutuphane bir Materyal DEGILDIR, materyallere sahiptir (kompozisyon).
class Kutuphane {
public:
    void ekle(std::unique_ptr<Materyal> m);
    void hepsiniYazdir() const;

private:
    std::vector<std::unique_ptr<Materyal>> raf_;
};
// END kutuphane

} // namespace kitaplik
