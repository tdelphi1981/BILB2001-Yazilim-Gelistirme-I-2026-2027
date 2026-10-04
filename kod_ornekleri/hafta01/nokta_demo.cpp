// YGI/kod_ornekleri/hafta01/nokta_demo.cpp
#include "nokta.hpp"
#include <iostream>

int main() {
// BEGIN demo
    geometri::Nokta a{1.0, 2.0};
    geometri::Nokta b{3.0, 4.0};
    auto toplam = geometri::topla(a, b);

    geometri::yazdir(a);
    std::cout << " + ";
    geometri::yazdir(b);
    std::cout << " = ";
    geometri::yazdir(toplam);
    std::cout << '\n';
// END demo
    return 0;
}
