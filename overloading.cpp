#include <iostream>

void greet()
{
    std::cout << "Hello!" << std::endl;
}

void greet(std::string name)
{

    std::cout << "Hello! " << name << std::endl;
}

void greet(std::string name1, std::string name2)
{
    std::cout << "Hello! " + name1 + " and " + name2 + "." << std::endl;
}

int main()
{

    greet();
    greet("Phyo");
    greet("Phyo", "Yumi");

    return 0;
}