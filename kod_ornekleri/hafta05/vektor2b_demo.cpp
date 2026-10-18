// YGI/kod_ornekleri/hafta05/vektor2b_demo.cpp
#include "vektor2b.hpp"

#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

int main() {
    using geometri::Vektor2B;

    // BEGIN aritmetik_demo
    Vektor2B v1(2, 3);
    Vektor2B v2(4, 1);
    std::cout << "v1=" << v1 << ", v2=" << v2 << '\n';
    std::cout << "v1+v2=" << (v1 + v2) << '\n';
    std::cout << "v1-v2=" << (v1 - v2) << '\n';
    std::cout << "v1*3=" << (v1 * 3) << '\n';
    std::cout << "3*v1=" << (3 * v1) << '\n';
    v1 += v2;
    std::cout << "v1 += v2 sonrasi v1=" << v1 << '\n';
    // END aritmetik_demo

    // BEGIN karsilastirma_demo
    Vektor2B a(2, 3);
    Vektor2B b(2, 3);
    Vektor2B c(4, 1);
    std::cout << std::boolalpha;
    std::cout << "(2,3) == (2,3) -> " << (a == b) << '\n';
    std::cout << "(2,3) < (4,1) -> " << (a < c) << '\n';

    std::vector<Vektor2B> vektorler{Vektor2B(3, 1), Vektor2B(1, 5), Vektor2B(2, 2)};
    std::sort(vektorler.begin(), vektorler.end());
    std::cout << "siralanmis: ";
    for (const auto& v : vektorler) {
        std::cout << v << ' ';
    }
    std::cout << '\n';
    // END karsilastirma_demo

    // BEGIN indeksleme_demo
    Vektor2B d(5, 7);
    std::cout << "d[0]=" << d[0] << ", d[1]=" << d[1] << '\n';
    d[0] = 10;
    std::cout << "d[0]=10 sonrasi d=" << d << '\n';
    // END indeksleme_demo

    // BEGIN akis_demo
    Vektor2B e(1, 2);
    std::cout << "operator<< ile e=" << e << '\n';

    std::istringstream giris("7 9");
    Vektor2B f;
    giris >> f;
    std::cout << "\"7 9\" metninden okunan f=" << f << '\n';
    // END akis_demo

    return 0;
}
