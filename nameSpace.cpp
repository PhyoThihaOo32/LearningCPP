#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    using namespace first; // Brings first::x into current scope
    using namespace std;   // Brings std::cout, std::endl, etc.
    using std::string;     // Also brings just std::string (redundant here)

    string name = "my name"; // std::string in action

    int x = 3; //  Local variable shadows first::x

    cout << x << std::endl; // Prints: 3 (local x)
    cout << "Using first namespace: "
         << first::x << std::endl;  // Prints: 1
    cout << second::x << std::endl; // Prints: 2

    return 0;
}

/*
Key Notes

int x = 3; inside main() overrides/shadows first::x for anything unqualified inside main().

first::x and second::x are accessed explicitly via scope resolution.

using namespace std; is convenient, but:

In larger programs, it can cause name conflicts.

Best to use std:: prefix or selectively import (using std::cout;).
*/