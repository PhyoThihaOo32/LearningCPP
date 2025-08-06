#include <iostream>
#include <limits>

void showBalance(double balance);
double deposit();
double withdrawl(double balance);

int main()
{

    double balance = 0;
    int choice;
    std::cout << "Welcome to Mobile Banking\n";

    do
    {
        std::cout << "\n1. Show Balance.\n";
        std::cout << "2. Deposit Money.\n";
        std::cout << "3. Withdraw Money.\n";
        std::cout << "4. Exit.\n";
        std::cin >> choice;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input! Please enter a number (1-4).\n";
            continue;
        }

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
        {
            double amount = withdrawl(balance);
            if (amount <= balance)
            {
                balance -= amount;
            }
            else
            {
                std::cout << "Insufficient Funds.\n";
            }
            break;
        }
        case 4:
            std::cout << "Thank you for visiting us!\n";
            break;
        default:
            std::cout << "Please enter a valid input (1-4).\n";
        }

    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your balance is: " << balance << " $.\n";
}

double deposit()
{
    double deposit;
    std::cout << "Please enter the amount you want to deposit:\n";
    std::cin >> deposit;
    if (deposit > 0)
    {
        return deposit;
    }
    else
    {
        std::cout << "You can't enter Negative amount!\n";
        return 0;
    }
}

double withdrawl(double balance)
{
    double withdrawlAmount;
    std::cout << "Please enter withdrawl amount: \n";
    std::cin >> withdrawlAmount;
    if (withdrawlAmount <= 0)
    {
        std::cout << "Invalid amount. Must be greater than zero.\n";
        return 0;
    }

    return withdrawlAmount;
}