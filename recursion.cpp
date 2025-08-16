#include <iostream>

/*
recursion = a programming technique where a function invokes itself from within
            break a complex concept into a repeatable single steps

(iterative vs recursive)

advantages = less code and its cleaner
             useful for sorting and searching algorithms

disadvantages = use more memory / slower
*/

void walkIteratively(int steps);
void walkRecursively(int steps, int stepNum = 1);

int main()
{

    walkRecursively(5);

    return 0;
}

void walkIteratively(int steps)
{
    for (int i = 1; i <= steps; i++)
    {
        std::cout << "Steps: " << i << std::endl;
    }
}

void walkRecursively(int steps, int stepNum) //  in C++, you can only give a default value for a parameter once
                                             // — usually in the function declaration, not in both the declaration and definition.
{
    if (steps > 0)
    {

        std::cout << "Steps: " << stepNum << std::endl;

        walkRecursively(steps - 1, stepNum + 1);
    }
}