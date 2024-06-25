#include <cmath>
#include <iomanip>
#include <iostream>

int main()
{
    double distanceInMiles = 0;
    std::cin >> distanceInMiles;
    std::cout << std::fixed << std::setprecision(1) << std::round(distanceInMiles * 1.6 * 10) / 10 << '\n';
}
