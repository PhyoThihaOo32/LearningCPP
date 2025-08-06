#include <iostream>
#include <string>

// cout << (insertion operator)
//  cin >> (extraction operator)

int main()
{

    std::string name;
    int age;

    std::cout << "What is your age?";
    std::cin >> age;

    std::cout << "What is your's name?";
    // std::cin >> name;
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}