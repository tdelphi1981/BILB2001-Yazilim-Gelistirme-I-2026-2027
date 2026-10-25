// YGI/kod_ornekleri/hafta06/sekil.hpp
// Materyal hiyerarsisinden bagimsiz, genel/gundelik bir ornek: saf sanal
// fonksiyon ve soyut sinif sozdizimini gostermek icin.
#pragma once

// BEGIN soyut_sekil
class Sekil {
public:
    virtual double alan() const = 0;
    virtual ~Sekil() = default;
};
// END soyut_sekil

// BEGIN sekil_turetilmis
class Daire : public Sekil {
public:
    explicit Daire(double yaricap) : yaricap_(yaricap) {}
    double alan() const override { return 3.14159265358979 * yaricap_ * yaricap_; }

private:
    double yaricap_;
};

class Kare : public Sekil {
public:
    explicit Kare(double kenar) : kenar_(kenar) {}
    double alan() const override { return kenar_ * kenar_; }

private:
    double kenar_;
};
// END sekil_turetilmis
