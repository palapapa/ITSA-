#include <iostream>

int main()
{
    unsigned long long i = 0;
    std::cin >> i;
    i < 32 ? (std::cout << (1U << i) << '\n') : (std::cout << "Value of more than 31\n");
}
