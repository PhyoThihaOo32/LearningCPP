#include <iostream>

using namespace std;

int main()
{

    /*
    array = is a collection of elements of the same data type
    stored in contiguous memory locations.

    */

    std::string cars[] = {"Totyota", "Nissan", "BMW"};
    int numbers[5];

    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;

    cars[0] = "KIA";

    std::cout << cars[0] << " ";
    std::cout << cars[1] << " ";
    std::cout << cars[2] << " " << endl;

    for (int i = 0; i < size(numbers); i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}