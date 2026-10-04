// YGI/kod_ornekleri/hafta01/nokta.hpp
#pragma once

namespace geometri {

// BEGIN yapi
struct Nokta {
    double x;
    double y;
};
// END yapi

// BEGIN bildirimler
Nokta topla(const Nokta& a, const Nokta& b);
void yazdir(const Nokta& n);
// END bildirimler

} // namespace geometri
