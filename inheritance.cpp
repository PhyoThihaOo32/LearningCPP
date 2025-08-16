/*
inheritance = a class can recieve attributes and methods from another class
              children classes inherit from a parent class
              helps to reuse similar code found within multiple classes
*/

#include <iostream>

class Animal
{
public:
    bool alive = true;

    void eat()
    {
        std::cout << "Eating." << std::endl;
    };
};

class Dog : public Animal
{
public:
    void bark()
    {
        std::cout << "Woof Woof!" << std::endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        std::cout << "Meow!" << std::endl;
    }
};

int main()
{
    Dog dog1;
    Cat cat;

    std::cout << dog1.alive << std::endl;
    dog1.eat();
    dog1.bark();

    cat.meow();
    cat.eat();

    return 0;
}