#include <iostream>
#include <bitset>

int main()
{
    unsigned x = 0;
    std::cin >> x;
    std::bitset<8> bits = x;
    std::cout << bits << '\n';
}
