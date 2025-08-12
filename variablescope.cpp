#include <iostream>

std::string name = "Global Name";

void printName();
void printName(std::string name);

int main()
{

    printName();
    printName(::name); // :: scope resolution operator.
    return 0;
}

void printName()
{
    std::string name = "Phyo";
    std::cout << name << std::endl;
}

void printName(std::string name)
{
    std::cout << name;
}

/*
| Feature     | Local Variable                 | Global Variable       |
| ----------- | ------------------------------ | --------------------- |
| Declared in | Function/block                 | Outside all functions |
| Scope       | Limited to that block          | Whole program file    |
| Lifetime    | Until block ends               | Entire runtime        |
| Priority    | Takes over global if same name | Shadowed by local     |

*/