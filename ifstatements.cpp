#include <iostream>

int main()
{

    int age;

    std::cout << "Please enter your age: ";
    std::cin >> age;

    if (age >= 100)
    {
        std::cout << "You are too old to enter or propably DEAD _ MTFK";
    }

    else if (age >= 18)
    {
        std::cout << "Welcome to the Jungle! Meow Meow ";
    }

    else if (age <= 0)
    {
        std::cout << "You are not born yet! Niggas";
    }

    else
    {
        std::cout << "You are not allowed to enter!";
    }

    return 0;
}