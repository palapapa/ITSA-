#include <array>
#include <iostream>
#include <algorithm>

int main()
{
    std::array<unsigned, 3> sides{{}};
    std::cin >> sides[0] >> sides[1] >> sides[2];
    std::sort(sides.begin(), sides.end());
    if (sides[0] + sides[1] > sides[2])
    {
        std::cout << "fit\n";
    }
    else
    {
        std::cout << "unfit\n";
    }
}
