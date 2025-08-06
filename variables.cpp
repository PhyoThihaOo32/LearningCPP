#include <iostream>

int main()
{

    int age;  // declaration
    age = 10; // assignment

    int y = 15;
    int sum = age + y;

    int days = 7.5;
    double price = 10.99;
    double GPA = 2.5;
    double temperature = 25.1;

    char grade = 'A';
    char middleInitial = 'T';

    // boolean

    bool isOn = true;
    bool isStudent = false;

    // string
    std::string name = "Phyo";
    std::string food = "Ramen";
    std::string city = "New York";

    std::cout << age << std::endl;

    std::cout << sum << std::endl;
    std::cout << "days: " << days << std::endl;
    std::cout << "price: " << price << std::endl;

    std::cout << isOn << std::endl;
    std::cout << name << std::endl;

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
    return 0;
}