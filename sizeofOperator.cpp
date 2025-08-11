#include <iostream>

using namespace std;

int main()
{

    /*
    sizeof() = determin the size in bytes of -variable, data type, class, objects, etc.
    */

    double gpa = 4.0;
    int age = 32;
    bool isOn = true;
    string city = "New York";
    char grade = 'A';

    string students[3] = {"Emily", "Jason", "Mike"};
    size_t elements = sizeof(students) / sizeof(string);

    cout << "size of double: " << sizeof(gpa) << endl
         << "size of int: " << sizeof(age) << endl
         << "size of boolean: " << sizeof(isOn) << endl
         << "size of string: " << sizeof(city) << endl
         << "size of char: " << sizeof(grade) << endl;

    cout << "number of elements in array: " << elements << endl;

    return 0;
}
