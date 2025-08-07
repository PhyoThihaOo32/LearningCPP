#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{

    char player;
    char computer;
    char choice;

    std::cout << "Rock! Paper! Scissor - Game!\n";

    do
    {
        std::cout << "Choose Either Options: \n";
        std::cout << "r - for Rock\n";
        std::cout << "p - for Paper\n";
        std::cout << "s - for scissor\n";
        char playerChoice = getUserChoice();
        std::cout << "You pick: ";
        showChoice(playerChoice);

        char computerChoice = getComputerChoice();
        std::cout << "Computer pick: ";
        showChoice(computerChoice);
        chooseWinner(playerChoice, computerChoice);
    } while (choice != 'r' && choice != 'p' && choice != 's');

    return 0;
}

char getUserChoice()
{
    char choice;
    std::cin >> choice;

    switch (choice)
    {
    case 'r':
        return 'r';
    case 'p':
        return 'p';
    case 's':
        return 's';
    }
}

char getComputerChoice()
{
    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
}

void showChoice(char choice)
{
    if (choice == 'r')
    {
        std::cout << "Rock!\n";
    }
    else if (choice == 'p')
    {
        std::cout << "Paper\n";
    }
    else
    {
        std::cout << "Scissors!\n";
    }
}

void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "Draw!\n";
        }
        else if (computer == 'p')
        {
            std::cout << "You Lose!\n";
        }
        else
        {
            std::cout << "You Win!\n";
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            std::cout << "You Win!\n";
        }
        else if (computer == 's')
        {
            std::cout << "You lose!\n";
        }
        else
        {
            std::cout << "Draw!\n";
        }
        break;
    case 's':
        if (computer == 'p')
        {
            std::cout << "You Win!\n";
        }
        else if (computer == 'r')
        {
            std::cout << "You lose!\n";
        }
        else
        {
            std::cout << "Draw!\n";
        }
        break;
    }
}
