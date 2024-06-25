#include <iostream>
#include <string>

template <typename T>
constexpr T cube(T num)
{
    return num * num * num;
}

int main()
{
    unsigned input = 0;
    std::cin >> input;
    std::string inputStr = std::to_string(input);
    if (static_cast<unsigned>(cube(inputStr[0] - '0') + cube(inputStr[1] - '0') + cube(inputStr[2] - '0')) == input)
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
    }
}
