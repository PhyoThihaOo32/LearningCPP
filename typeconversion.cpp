#include <iostream>

/*
Type Conversion - is when a value of one data type is converted into another type.
Implicit - automactically
Explicit -
*/

int main()
{

    double x = (int)3.14;
    char d = 100;
    int correct = 8;
    int questions = 10;
    double score = (double)correct / questions * 100;

    std::cout << x << std::endl;
    std::cout << d << std::endl;

    std::cout << score << "%" << std::endl;
    return 0;
}