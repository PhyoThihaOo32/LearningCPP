#include <iostream>

int factorialIterative(int number);
int factorialRecursive(int number);

int main()
{

    factorialIterative(5);
    std::cout << "Recursive approach: " << factorialRecursive(5);

    return 0;
}

int factorialIterative(int number)
{
    int result = 1;
    for (int i = 1; i <= number; i++)
    {
        std::cout << result << " * " << i << " = " << result * i << std::endl;
        result *= i;
    }

    return result;
}

int factorialRecursive(int number)
{
    if (number > 1)
    {
        return number * factorialRecursive(number - 1); // 5 * 4 * 3 * 2
    }

    else
    {
        return 1;
    }
}
