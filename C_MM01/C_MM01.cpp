#include <iomanip>
#include <ios>
#include <iostream>

int main()
{
    unsigned base1 = 0, base2 = 0, height = 0;
    while (std::cin >> base1 >> base2 >> height)
    {
        std::cout << "Trapezoid area:" << std::fixed << std::setprecision(1) << static_cast<double>(base1 + base2) * height / 2 << '\n';
    }
}
