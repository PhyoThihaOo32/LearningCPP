#include <iostream>

std::string name = "Global Name";

void printName();
void printName(std::string name);

int main()
{

    printName();
    printName(::name);
    return 0;
}

void printName()
{
    std::string name = "Phyo";
    std::cout << name << std::endl;
}

void printName(std::string name)
{
    std::cout << name;
}