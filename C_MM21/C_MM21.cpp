#include <iostream>

int main()
{
    unsigned num = 0;
    std::cin >> num;
    unsigned long long result = 1;
    for (unsigned i = 1; i <= num; i++)
    {
        result *= i;
    }
    std::cout << result << '\n';
}
