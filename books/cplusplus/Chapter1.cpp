#include <iostream>

int main()
{
    int a{7}; // 7

    int b;    // undefined
    int c{2}; // 2

    b = a / c * 2 + 1; //  7

    int d{b / 4}; // 1
    int e{};      // 0
    e = d + b;    // 8

    std::cout << a << " " << b << " " << c << " " << d << " " << e << '\n';

    int f{e / 2.5};
    std::cout << f << '\n';

    return 0;
}