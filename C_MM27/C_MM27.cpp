#include <iostream>

int main()
{
    int a = 0, b = 0;
    std::cin >> a >> b;
    if (a > b)
    {
        std::swap(a, b);
    }
    std::cout << (a + b) * (b - a + 1) / 2 << '\n';
}
