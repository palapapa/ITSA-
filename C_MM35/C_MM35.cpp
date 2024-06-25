#include <iostream>

int main()
{
    unsigned year = 0;
    std::cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        std::cout << "Bissextile Year\n";
    }
    else
    {
        std::cout << "Common Year\n";
    }
}
