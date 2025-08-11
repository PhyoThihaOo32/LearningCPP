#include <iostream>

void bubbleSortArray(int array[], int size);

int main()
{

    int numbers[] = {7, 2, 10, 4, 1, 9, 6, 3, 8, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    bubbleSortArray(numbers, size);

    for (int num : numbers)
    {
        std::cout << num << std::endl;
    }

    return 0;
}

void bubbleSortArray(int array[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp;

                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}