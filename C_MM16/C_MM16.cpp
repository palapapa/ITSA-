#include <iostream>

int main()
{
    int x = 0, y = 0;
    while (std::cin >> x >> y)
    {
        x * x + y * y <= 10000 ? (std::cout << "inside\n") : (std::cout << "outside\n");
    }
}
