// YGI/kod_ornekleri/hafta02/nokta.hpp
// Hafta 1'den aynen tasinmistir (surekliligi bozmadan).
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
