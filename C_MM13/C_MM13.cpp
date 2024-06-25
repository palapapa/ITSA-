#include <iostream>

int main()
{
    unsigned startHour = 0, startMinute = 0, endHour = 0, endMinute = 0;
    std::cin >> startHour >> startMinute >> endHour >> endMinute;
    unsigned durationInMinutes = (endHour - startHour) * 60 + endMinute - startMinute;
    unsigned timeSegmentCount = (durationInMinutes - durationInMinutes % 30) / 30;
    unsigned totalPrice = 0;
    totalPrice += (timeSegmentCount >= 4 ? 4 : timeSegmentCount) * 30;
    if (timeSegmentCount > 4)
    {
        totalPrice += (timeSegmentCount >= 8 ? 4 : timeSegmentCount - 4) * 40;
    }
    if (timeSegmentCount > 8)
    {
        totalPrice += (timeSegmentCount - 8) * 60;
    }
    std::cout << totalPrice << '\n';
}
