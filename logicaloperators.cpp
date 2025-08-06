#include <iostream>

int main()
{

    int temp;
    std::cout << "Enter temperature: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30)
    {
        std::cout << "the temperature is good";
    }

    else
    {
        std::cout << "not a good temperature.";
    }
    return 0;
}