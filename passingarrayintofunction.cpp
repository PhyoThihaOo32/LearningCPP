#include <iostream>

using namespace std;

double getTotal(double price[], int size);

int main()
{

    double prices[] = {4.9, 5.9, 19.75, 100.00};
    int size = sizeof(prices) / sizeof(double);

    cout << "Total: " << getTotal(prices, size) << endl;

    return 0;
}

double getTotal(double price[], int size)
{

    double total = 0;

    for (int i = 0; i < size; i++)
    {

        total += price[i];
    }

    return total;
}
