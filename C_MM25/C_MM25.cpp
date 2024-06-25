#include <iostream>

int main()
{
    unsigned input = 0;
    std::cin >> input;
    unsigned result = 0;
    for (unsigned i = 1; i <= input; i++)
    {
        if (i % 3 == 0)
        {
            result += i;
        }
    }
    std::cout << result << '\n';
}
