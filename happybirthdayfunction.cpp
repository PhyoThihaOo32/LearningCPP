#include <iostream>

void happyBirthday(std::string name, int age);

int main()
{
    std::string name = "Phyo";
    int age = 28;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age)
{

    std::cout << "Happy birthday to you\nHappy birthday to you\n"
              << "Happy birthday dear " << name << "\nHappy birthday to you!" << std::endl;

    std::cout << "Congragulation on your " << age << " birthday!" << std::endl;
}