/*
pointers = variable that stores a memory address of another variable
           sometimes it's easier to work with an address

           & address-of operator
           * dereference operator
*/

#include <iostream>

int main()
{

    std::string name = "Phyo";
    int age = 28;
    std::string myPizzas[5] = {"Pepperoni", "Margherita", "Hawaiian", "BBQ Chicken", "Veggie"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pMyPizzas = myPizzas;

    std::cout << "address of name " << pName << std::endl;
    std::cout << "value of name " << *pName << std::endl;

    std::cout << "address of myPizza " << myPizzas << std::endl;
    std::cout << "value of myPizza " << pMyPizzas[2] << std::endl;

    // change value using pointer
    *pAge = 34;
    std::cout << "new value of age: " << age << std::endl;

    return 0;
}
