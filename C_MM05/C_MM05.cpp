#include <cmath>
#include <iomanip>
#include <iostream>

int main()
{
    double sideLength = 0;
    std::cin >> sideLength;
    std::cout << std::fixed << std::setprecision(1) << std::round(sideLength * sideLength * 10) / 10 << '\n';
}
