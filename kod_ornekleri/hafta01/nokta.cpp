// YGI/kod_ornekleri/hafta01/nokta.cpp
#include "nokta.hpp"
#include <iostream>

namespace geometri {

// BEGIN topla_govde
Nokta topla(const Nokta& a, const Nokta& b) {
    return Nokta{a.x + b.x, a.y + b.y};
}
// END topla_govde

// BEGIN yazdir_govde
void yazdir(const Nokta& n) {
    std::cout << "(" << n.x << ", " << n.y << ")";
}
// END yazdir_govde

} // namespace geometri
