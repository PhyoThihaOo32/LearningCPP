#include <iostream>

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main()
{

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "black";

    car2.model = "Toyota";
    car2.year = 2022;
    car2.color = "white4";

    std::cout << &car1 << std::endl;
    paintCar(car1, "Yellow");
    paintCar(car2, "Gold");
    printCar(car1); // struct are passed by value rather than their reference
    printCar(car2);
}

void printCar(Car &car)
{
    std::cout << car.model << std::endl;
    std::cout << car.year << std::endl;
    std::cout << car.color << std::endl;
    std::cout << &car << std::endl;
}

void paintCar(Car &car, std::string color)
{
    car.color = color;
}