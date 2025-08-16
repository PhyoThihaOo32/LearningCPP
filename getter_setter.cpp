/*
Abstraction = hiding unnecessary data from outside a class
getter = function that makes a private attribute READABLE
setter = function that makes a private attribute WRTTEABLE
*/

#include <iostream>

class Stove
{
private:
    int temperature = 0;

public:
    Stove(int temperature)
    {
        setTemperature(temperature);
    }
    int getTemperature()
    {
        return temperature;
    }

    void setTemperature(int temperature)
    {
        if (temperature < 0)
        {
            this->temperature = 0;
        }
        else if (temperature > 30)
        {
            temperature = 30;
        }
        else
        {
            this->temperature = temperature;
        }
    }
};

int main()
{

    Stove stove(5);
    std::cout << "current temp: " << stove.getTemperature() << std::endl;
    stove.setTemperature(20);
    std::cout << "current temp: " << stove.getTemperature() << std::endl;

    std::cout << "current temp: " << stove.getTemperature() << std::endl;

    return 0;
}