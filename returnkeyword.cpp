#include <iostream>

double askUserInput();
double square(double length);
double cube(double length);
void userFullName();

int main()
{

    userFullName();
    double length = askUserInput();
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    return 0;
}

void userFullName()
{
    std::string firstName, lastName;

    std::cout << "Enter first Name: ";
    std::cin >> firstName;

    std::cout << "Enter last Name: ";
    std::cin >> lastName;

    std::cout << "Hello " << firstName + " " + lastName << std::endl;
}

double askUserInput()
{

    double length;
    std::cout << "Enter the length: ";
    std::cin >> length;
    return length;
}

double square(double length)
{
    return length * length;
}

double cube(double length)
{
    return length * length * length;
}