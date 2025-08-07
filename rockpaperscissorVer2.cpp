#include <iostream>
#include <cstdlib>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char playAgain;

    std::srand(static_cast<unsigned int>(std::time(nullptr))); // seed once at start

    std::cout << "🎮 Rock! Paper! Scissors - Game 🎮\n";

    do
    {
        char playerChoice = getUserChoice();
        std::cout << "You picked: ";
        showChoice(playerChoice);

        char computerChoice = getComputerChoice();
        std::cout << "Computer picked: ";
        showChoice(computerChoice);

        chooseWinner(playerChoice, computerChoice);

        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thanks for playing!\n";
    return 0;
}

char getUserChoice()
{
    char choice;
    do
    {
        std::cout << "Choose an option:\n";
        std::cout << "r - Rock\n";
        std::cout << "p - Paper\n";
        std::cout << "s - Scissors\n";
        std::cout << "Your choice: ";
        std::cin >> choice;

        if (choice != 'r' && choice != 'p' && choice != 's')
        {
            std::cout << "Invalid input. Please try again.\n";
        }
    } while (choice != 'r' && choice != 'p' && choice != 's');

    return choice;
}

char getComputerChoice()
{
    int num = std::rand() % 3;
    switch (num)
    {
    case 0:
        return 'r';
    case 1:
        return 'p';
    case 2:
        return 's';
    default:
        return 'r'; // fallback
    }
}

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout << "Scissors\n";
        break;
    }
}

void chooseWinner(char player, char computer)
{
    if (player == computer)
    {
        std::cout << "It's a Draw!\n";
    }
    else if ((player == 'r' && computer == 's') ||
             (player == 'p' && computer == 'r') ||
             (player == 's' && computer == 'p'))
    {
        std::cout << "You Win!\n";
    }
    else
    {
        std::cout << "You Lose!\n";
    }
}
