#include <iostream>

int main()
{
    unsigned input = 0;
    std::cin >> input;
    bool isPrime = true;
    for (unsigned factor = 2; factor <= input / 2; factor++)
    {
        if (input % factor == 0)
        {
            isPrime = false;
            break;
        }
    }
    isPrime ? std::cout << "YES\n" : std::cout << "NO\n";
}
