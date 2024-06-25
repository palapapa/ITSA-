#include <iomanip>
#include <iostream>

int main()
{
    unsigned minutes = 0;
    double fee = 0;
    std::cin >> minutes;
    if (minutes <= 800)
    {
        fee = minutes * 0.9;
    }
    else if (minutes <= 1499)
    {
        fee = minutes * 0.9 * 0.9;
    }
    else
    {
        fee = minutes * 0.9 * 0.79;
    }
    std::cout << std::fixed << std::setprecision(1) << fee << '\n';
}
