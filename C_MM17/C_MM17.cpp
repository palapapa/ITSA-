#include <iostream>
#include <numeric>

int main()
{
    int x = 0, y = 0;
    std::cin >> x >> y;
    std::cout << std::gcd(x, y) << '\n';
}
