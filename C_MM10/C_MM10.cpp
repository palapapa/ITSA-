#include <iomanip>
#include <iostream>

int main()
{
    double temperature = 0;
    std::cin >> temperature;
    std::cout << std::fixed << std::setprecision(1) << temperature * 9 / 5 + 32 << '\n';
}
