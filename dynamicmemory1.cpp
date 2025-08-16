#include <iostream>

int main()
{

    // int *pNum = nullptr;
    // pNum = new int;
    // *pNum = 21;

    // std::cout << "address: " << pNum << "\n";
    // std::cout << "value: " << *pNum << "\n";

    // delete pNum;

    int size;

    std::cout << "What is the size of the array: " << std::endl;
    std::cin >> size;
    char *pGrades = nullptr;
    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter a character:(A-Z) " << std::endl;
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    //  for (char character : pGrades)
    //  {
    //    std::cout << character << " " << std::endl;
    //  }

    // You’re using a range-based for loop (for (char character : pGrades)) on a dynamically allocated array without telling C++ how many elements it should iterate over.
    // Range-based loops work for:
    // Arrays with compile-time known size
    // Containers like std::vector, std::array, etc.
    // But here, pGrades is just a raw pointer. The compiler doesn’t know size, so it has no idea where the array ends — it will keep reading memory until it hits a null terminator ('\0'), which could cause garbage output or a crash.

    return 0;
}