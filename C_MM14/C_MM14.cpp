#include <iostream>

int main()
{
    unsigned totalSeconds = 0, days = 0, hours = 0, minutes = 0, seconds = 0;
    std::cin >> totalSeconds;
    while (totalSeconds > 60 * 60 * 24)
    {
        totalSeconds -= 60 * 60 * 24;
        days++;
    }
    while (totalSeconds > 60 * 60)
    {
        totalSeconds -= 60 * 60;
        hours++;
    }
    while (totalSeconds > 60)
    {
        totalSeconds -= 60;
        minutes++;
    }
    seconds = totalSeconds;
    std::cout << days << " days\n" << hours << " hours\n" << minutes << " minutes\n" << seconds << " seconds\n";
}
