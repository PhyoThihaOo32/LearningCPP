#include <iostream>

int main()
{

    int num;
    int guess;
    int tries = 0; // Always initialize your variables in C++ unless you're 100% sure they'll be assigned before used.

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "------- Guess the Number ! ---------" << std::endl;

    do
    {
        std::cout << "Guess a number between (1-100): ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "Too high!" << std::endl;
        }
        else if (guess < num)
        {
            std::cout << "Too Low!" << std::endl;
        }
        else
        {
            std::cout << "Correct Guess! " << "Number of Tires: " << tries << std::endl;
        }

    } while (guess != num);

    std::cout << "----- happy number guessing! -----";

    return 0;
}