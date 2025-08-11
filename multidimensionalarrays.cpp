#include <iostream>

int main()
{

    std::string cars[][3] = {
        {"Toyota", "Camry", "RAV-4"},
        {"Chevrolet", "Corvette", "Suburban"},
        {"Honda", "Civic", "CR-V"},
        {"Ford", "Mustang", "Explorer"}};

    int row = sizeof(cars) / sizeof(cars[0]);
    int column = sizeof(cars[0]) / sizeof(cars[0][0]);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}