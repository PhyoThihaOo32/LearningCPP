#include <iostream>
#include <string>

/*
When you declare a function parameter with const, you’re telling the compiler:
“This value must not be modified inside the function.”
It’s often used to:
Protect data from being accidentally changed.
Allow passing by reference without copying, while still ensuring no modification.
*/

void sayHello(const std::string name, const std::string greeting);
std::string askName();

int main()
{

    std::string name = askName();
    std::string greeting = "How are you?";

    sayHello(name, greeting);

    return 0;
}

std::string askName()
{
    std::string userName;
    std::cout << "What is your name? " << std::endl;
    getline(std::cin, userName);

    return userName;
}

void sayHello(const std::string name, const std::string greeting)
{

    std::cout << "Hello! " << name << "\n"
              << greeting << std::endl;
}
