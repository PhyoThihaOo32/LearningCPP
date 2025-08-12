#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char spaces1[9] = {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running)
    {

        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }

        else if (checkTie(spaces))
        {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }

        else if (checkTie(spaces))
        {
            running = false;
            break;
        }
    }

    return 0;
}

void drawBoard(char *spaces)
{

    std::cout << "\n";
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |   " << spaces[2] << " " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |   " << spaces[5] << " " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |   " << spaces[8] << " " << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "\n";
}
void playerMove(char *spaces, char player)
{
    int number;
    while (true)
    {
        std::cout << "Enter a spot to place a marker (1-9): ";

        if (!(std::cin >> number))
        { // non-numeric input
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Invalid Character Input." << std::endl;
            continue;
        }

        number--; // convert 1–9 -> 0–8

        if (number < 0 || number > 8)
        { // range check
            std::cout << "Out of range. Choose 1-9.\n";
            continue;
        }

        if (spaces[number] != ' ')
        { // occupancy check
            std::cout << "That spot is taken. Try again.\n";
            continue;
        }

        spaces[number] = player; // valid move
        break;
    }
}
void computerMove(char *spaces, char computer)
{

    int number;
    srand(time(NULL));

    while (true)
    {
        number = rand() % 9;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
    }
}
bool checkWinner(char *spaces, char player, char computer)
{
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1] && spaces[1] == spaces[2]))
    {
        spaces[0] == player ? std::cout << "You Win!" << std::endl : std::cout << "You Lose!" << std::endl;
    }

    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4] && spaces[4] == spaces[5]))
    {
        spaces[3] == player ? std::cout << "You Win!" << std::endl : std::cout << "You Lose!" << std::endl;
    }

    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7] && spaces[7] == spaces[8]))
    {
        spaces[6] == player ? std::cout << "You Win!" << std::endl : std::cout << "You Lose!" << std::endl;
    }

    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3] && spaces[3] == spaces[6]))
    {
        spaces[0] == player ? std::cout << "You Win!" << std::endl : std::cout << "You Lose!" << std::endl;
    }

    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4] && spaces[4] == spaces[7]))
    {
        spaces[1] == player ? std::cout << "You Win!" << std::endl : std::cout << "You Lose!" << std::endl;
    }

    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5] && spaces[5] == spaces[8]))
    {
        spaces[2] == player ? std::cout << "You Win!" << std::endl : std::cout << "You Lose!" << std::endl;
    }

    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4] && spaces[4] == spaces[8]))
    {
        spaces[0] == player ? std::cout << "You Win!" << std::endl : std::cout << "You Lose!" << std::endl;
    }

    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4] && spaces[4] == spaces[6]))
    {
        spaces[2] == player ? std::cout << "You Win!" << std::endl : std::cout << "You Lose!" << std::endl;
    }

    else
    {
        return false;
    }

    return true;
}
bool checkTie(char *spaces)
{

    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }

    std::cout << "It's a Tie.";
    return true;
}