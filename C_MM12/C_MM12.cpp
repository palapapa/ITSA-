#include <iomanip>
#include <iostream>
#include <cmath>

int main()
{
    double speedDifference = 1 - 0.0254 * 30, distance = 0;
    std::cin >> distance;
    std::cout << std::fixed << std::setprecision(0) << ceil(distance / speedDifference) << '\n';
}
