/*
null value = a special value that means something has no value.
             When a pointer is holding a null value, that pointer is not pointing
             at anything(null pointer)
nullptr = keyword represent a null pointer literal
          null pointer are helpful when determining if an address
          was successfully assigned to a pointer

when using pointer, be careful that the code isn't dereferencing nullptr or pointing to
free memory - which will cause undefined behavior.
*/

#include <iostream>

int main()
{

    int *pointer = nullptr;
    int x = 123;

    // pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "address was not assigned!";
    }

    else
    {
        std::cout << "address of the pointer: " << pointer << std::endl;
        std::cout << "reference value of the pointer: " << *pointer << std::endl;
    }

    return 0;
}