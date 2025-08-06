#include <iostream>

// break = it break out of the loop
// continue = skip the current iteration

int main()
{

    for (int i = 0; i <= 20; i++)
    {
        if (i == 13)
        {
            std::cout << "Skipped!\n";
            continue;
        }

        std::cout << i << std::endl;
    }

    return 0;
}