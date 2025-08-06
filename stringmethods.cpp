#include <iostream>
#include <string>

int main()
{

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    name.empty() ? std::cout << "You didn't enter your name" << std::endl : name.length() >= 12 ? std::cout << "Max character is 12" << std::endl
                                                                                                : std::cout << "Welcome " << name << std::endl;

    name.append("124@gmail.com");

    std::cout << "Your suggested username is: " << name << std::endl;

    name.clear();

    // name.at();
    // name.insert(0, "$");
    // name.erase();
    // name.find(' ');

    return 0;
}