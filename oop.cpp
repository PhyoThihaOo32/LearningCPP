/*
object = a collection of attributes and methods
         they can have characteristics and could perform actions
         can be used to mimic real world items(phone, book, human, solor systems, etc)
         created from a class with acts as a 'blue-print'
*/
#include <iostream>

class Human
{
public:
    std::string name;
    std::string occupation;
    int age;

    void eat()
    {
        std::cout << name << " is eating." << std::endl;
    }

    void drink()
    {
        std::cout << name << " is drinking." << std::endl;
    }

    void sleep()
    {
        std::cout << name << " is sleeping." << std::endl;
    }
};

class Car
{
public:
    std::string make;
    std::string model;
    int year;
    std::string color;

    void accelerate()
    {
        std::cout << "accelerated!" << std::endl;
    }

    void brake()
    {
        std::cout << "Foot on the break!" << std::endl;
    }
};

int main()
{

    Human human1;
    human1.name = "Hoboken Joe";
    human1.occupation = "corrupted banker";
    human1.age = 46;

    Car car1;
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.color = "Midnight Blue";

    std::cout << human1.name << std::endl;
    std::cout << human1.occupation << std::endl;
    std::cout << human1.age << std::endl;

    human1.eat();
    human1.sleep();

    std::cout << car1.make << std::endl;
    std::cout << car1.model << std::endl;
    std::cout << car1.color << std::endl;

    car1.accelerate();
    car1.brake();

        return 0;
}