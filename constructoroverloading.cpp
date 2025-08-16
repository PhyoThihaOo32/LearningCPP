/*
overloaded constructor = multiple constructors w/ same name but different parameters
                         allow for varying arguments when instantiating an object
*/

#include <iostream>

class Pizza
{
public:
    std::string topping1{};
    std::string topping2{};

    Pizza()
    {
        std::cout << "No topping at all." << std::endl;
    }

    Pizza(std::string topping1)
    {
        this->topping1 = topping1;
    }

    Pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main()
{

    Pizza myPizza("pepperoni");
    Pizza myPizza2("mushroom", "pepper");
    Pizza myPizza3;
    std::cout << myPizza2.topping1 << std::endl;
    std::cout << myPizza2.topping2 << std::endl;

    return 0;
}