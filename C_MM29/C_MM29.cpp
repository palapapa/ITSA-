#include <iostream>

int main()
{
    unsigned input = 0;
    std::cin >> input;
    for (unsigned i = input - 1; i != 0; i--)
    {
        bool isPrime = true;
        for (unsigned factor = 2; factor <= i / 2; factor++)
        {
            if (i % factor == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            std::cout << i << '\n';
            break;
        }
    }
}
