/*
enum = user-defined data type that consists of paired named-integer constants.
       great if you have a set of potential options.
*/
#include <iostream>

enum Day
{
    sunday = 0,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};

int main()
{
    Day today = sunday;

    switch (today)
    {
    case sunday:
        std::cout << "Sunday." << std::endl;
        break;
    }
}