/*
constructor = special method that is automatically called when an object is instantiated
              useful for assigning values to attributes as arguments
*/

#include <iostream>

class Student
{
public:
    std::string name;
    int age;
    double gpa;

    Student(std::string name, int age, double gpa)
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

class Car
{
public:
    std::string make;
    std::string model;
    std::string color;
    int year;

    Car(std::string make, std::string model, std::string color, int year)
    {
        this->make = make;
        this->model = model;
        this->color = color;
        this->year = year;
    }
};

int main()
{

    Student student1("Talktive May", 34, 3.2);

    std::cout << student1.name << std::endl;
    std::cout << student1.age << std::endl;
    std::cout << student1.gpa << std::endl;

    Car myCar("Toyota", "Camry", "Red", 2020);

    std::cout << myCar.make << std::endl;
    std::cout << myCar.model << std::endl;
    std::cout << myCar.color << std::endl;
    std::cout << myCar.year << std::endl;

    return 0;
}