#include <iostream>

/*
When your program runs, all variables are stored in RAM.
A memory address is simply the location in memory where a variable lives.
Think of it like an apartment building:
Variable name = the name of the tenant
Value = the tenant living there
Memory address = the apartment number

In C++, you use the address-of operator (&) to get the memory address of a variable.
*/

using namespace std;

int main()
{

    string name = "Nacromancer";
    int age = 34;
    bool isAlive = true;

    cout << "Memory Address of name variable: " << &name << endl;
    cout << "Memory Address of age variable: " << &age << endl;
    cout << "Memory Address of isAlive variable: " << &isAlive << endl;

    return 0;
}