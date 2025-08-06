#include <iostream>

int main()
{

    srand(time(NULL));
    int randomNum = (rand() % 5) + 1;

    switch (randomNum)
    {
    case 1:
        std::cout << "You win a teddy bear!";
        break;
    case 2:
        std::cout << "You win a toy car!";
        break;
    case 3:
        std::cout << "You win a giant lollipop!";
        break;
    case 4:
        std::cout << "You win a mystery box!";
        break;
    case 5:
        std::cout << "You win a free game token!";
        break;
    case 6:
        std::cout << "You win a plush unicorn!";
        break;
    default:
        std::cout << "Invalid number. Try again!";
        break;
    }
    return 0;
}