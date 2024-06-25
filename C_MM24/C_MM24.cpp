#include <iomanip>
#include <iostream>

int main()
{
    unsigned hoursWorked = 0, hourlyWage = 0;
    std::cin >> hoursWorked >> hourlyWage;
    double result = 0;
    if (hoursWorked <= 60)
    {
        result = hoursWorked * hourlyWage;
    }
    else if (hoursWorked > 60 && hoursWorked <= 120)
    {
        result = 60 * hourlyWage + (hoursWorked - 60) * hourlyWage * 1.33;
    }
    else
    {
        result = 60 * hourlyWage + 60 * hourlyWage * 1.33 + (hoursWorked - 120) * hourlyWage * 1.66;
    }
    std::cout << std::fixed << std::setprecision(1) << result << '\n';
}
