#include <iostream>

int main()
{
    unsigned num = 0;
    std::cin >> num;
    if (num >= 35)
    {
        std::cout << 35;
    }
    for (unsigned i = 70; i <= num; i += 35)
    {
        std::cout << ' ' << i;
    }
    std::cout << '\n';
}
