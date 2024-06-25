#include <iomanip>
#include <iostream>

int main()
{
    unsigned base = 0, height = 0;
    while (std::cin >> base >> height)
    {
        std::cout << std::fixed << std::setprecision(1) << base * height / 2.0 << '\n';
    }
}
