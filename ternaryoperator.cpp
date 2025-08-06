#include <iostream>

/*
ternary operator:
condition ? value_if_true : value_if_false;
*/

int main()
{

    int grade;
    std::cout << "Enter your grade (0-100): ";
    std::cin >> grade;

    grade >= 70 ? std::cout << "You passed" << std::endl : std::cout << "You failed" << std::endl;

    int number;
    std::cout << "Enter any number: ";
    std::cin >> number;

    number % 2 == 0 ? std::cout << "is an even number." << std::endl : std::cout << "is an odd number." << std::endl;

    bool isRaining = true;

    std::cout << (isRaining ? "don't forget to bring your umbrella!" : "don't forget your sunglasses!");

    return 0;
}