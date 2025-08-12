/*
Lugh Algorithm
1.double every second digit from right to left
if double number is 2 digits, split them
2.add all single digits from step 1
3.add all ode numbered digits from right to left
4.sum results from steps 2 & 3
5.if step 4 is divisible by 10, # is valid

// Example Discover credit card number (for testing/validation purposes only)
const std::string discoverCardNumber = "6011111111111117";

6011   1111   1111   1117
12 2   2 2    2 2   2 2
1 2 2  2 2    2 2   2 2
17
0 1   1 1     1 1   1 7
13

30 % 10 = 0 ====> is valid


*/

#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main()
{

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: " << std::endl;
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0)
    {
        std::cout << cardNumber << " is valid." << std::endl;
    }
    else
    {
        std::cout << cardNumber << " is not valid." << std::endl;
    }

    return 0;
}

int getDigit(const int number)
{

    return (number % 10) + ((number / 10) % 10);
}
int sumOddDigits(const std::string cardNumber)
{

    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {

        sum += getDigit(cardNumber[i] - '0');
    }

    return sum;
}
int sumEvenDigits(const std::string cardNumber)
{

    int sum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {

        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}
