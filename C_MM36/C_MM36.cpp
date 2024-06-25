#include <iostream>

int main()
{
    unsigned month = 0;
    std::cin >> month;
    if (3 <= month && month <= 5)
    {
        std::cout << "Spring\n";
    }
    else if (6 <= month && month <= 8)
    {
        std::cout << "Summer\n";
    }
    else if (9 <= month && month <= 11)
    {
        std::cout << "Autumn\n";
    }
    else
    {
        std::cout << "Winter\n";
    }
}
