#include <iostream>

int main()
{
    int a = 0, b = 0;
    std::cin >> a >> b;
    int quotient = a / b, remainder = a % b;
    if (remainder < 0) // a is negative
    {
        if (quotient < 0) // b is not negative
        {
            quotient--;
        }
        else // b is negative
        {
            quotient++;
        }
        remainder += b;
    }
    std::cout << a << '+' << b << '=' << a + b << '\n'
        << a << '*' << b << '=' << a * b << '\n'
        << a << '-' << b << '=' << a - b << '\n'
        << a << '/' << b << '=' << quotient << "..." << remainder << '\n';
}
