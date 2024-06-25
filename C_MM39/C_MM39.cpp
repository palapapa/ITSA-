#include <array>
#include <iostream>
#include <algorithm>

int main()
{
    std::array<unsigned, 3> sides{{}};
    std::cin >> sides[0] >> sides[1] >> sides[2];
    std::sort(sides.begin(), sides.end());
    if (sides[0] + sides[1] <= sides[2])
    {
        std::cout << "Not Triangle\n";
    }
    else if (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2])
    {
        std::cout << "Right Triangle\n";
    }
    else if (sides[0] * sides[0] + sides[1] * sides[1] < sides[2] * sides[2])
    {
        std::cout << "Obtuse Triangle\n";
    }
    else
    {
        std::cout << "Acute Triangle\n";
    }
}
