#include <iostream>

int main()
{
    unsigned x = 0, y = 0;
    while (std::cin >> x >> y)
    {
        x <= 100 && y <= 100 ? (std::cout << "inside\n") : (std::cout << "outside\n");
    }
}
