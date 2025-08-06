#include <iostream>

int main()
{
    double fahrenheit, celsius;
    char unit;

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to (F/C): ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> celsius;

        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        std::cout << "Temperature in Fahrenheit: " << fahrenheit << "\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> fahrenheit;

        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        std::cout << "Temperature in Celsius: " << celsius << "\n";
    }
    else
    {
        std::cout << "Invalid input. Please use 'F' or 'C' only.\n";
    }

    return 0;
}
