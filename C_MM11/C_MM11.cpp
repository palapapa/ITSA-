#include <iostream>

int main()
{
    unsigned price = 0, tenDollarCoinCount = 0, fiveDollarCoinCount = 0, oneDollarCoinCount = 0;
    std::cin >> price;
    while (price >= 10)
    {
        tenDollarCoinCount++;
        price -= 10;
    }
    while (price >= 5)
    {
        fiveDollarCoinCount++;
        price -= 5;
    }
    while (price >= 1)
    {
        oneDollarCoinCount++;
        price -= 1;
    }
    std::cout << "NT10=" << tenDollarCoinCount << '\n' << "NT5=" << fiveDollarCoinCount << '\n' << "NT1=" << oneDollarCoinCount << '\n';
}
