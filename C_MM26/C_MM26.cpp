#include <iostream>

int main()
{
    unsigned input = 0;
    std::cin >> input;
    for (unsigned i = 1; i <= input; i++)
    {
        std::cout << i << '*' << i << '=' << i * i << '\n';
    }
}
