/*
struct = a structure that group related variable under one name
         struct can contain many different data types(string, int, bool etc) variables in a struct are known as "members"
         members can be access with "class memeber access opeation".
*/

#include <iostream>

struct students
{
    std::string name;
    double gpa;
    bool enrolled = true;
};

int main()
{

    students student1;
    student1.name = "Goffy Goul";
    student1.gpa = 3.4;
    student1.enrolled;

    std::cout << student1.name << std::endl;
    std::cout << student1.enrolled << std::endl;

    return 0;
}