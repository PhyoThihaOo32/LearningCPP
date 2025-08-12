#include <iostream>

using namespace std;

void passByValue(int x);
void showOriginalValue(int x);
void passByReference(int &x);
void swapByValue(string x, string y);
void swapByReference(string &x, string &y);
void showFoods(string x, string y);

int main()
{

    int originalValue = 10;
    string food1 = "Milk";
    string food2 = "Bread";

    passByValue(originalValue);
    showOriginalValue(originalValue);

    passByReference(originalValue);
    showOriginalValue(originalValue);

    swapByValue(food1, food2);
    showFoods(food1, food2);

    swapByReference(food1, food2);
    showFoods(food1, food2);

    return 0;
}

void passByValue(int x)
{
    cout << "Enter the value you want to change: " << endl;
    cin >> x;
    cout << "New Value: " << x << endl;
}

void passByReference(int &x)
{
    cout << "Enter the value you want to change: " << endl;
    cin >> x;
    cout << "New Value: " << x << endl;
}

void showOriginalValue(int x)
{
    cout << "Original Value: " << x << endl;
}

void swapByValue(string x, string y)
{
    string temp;
    temp = x;
    x = y;
    y = temp;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

void swapByReference(string &x, string &y)
{
    string temp;
    temp = x;
    x = y;
    y = temp;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

void showFoods(string x, string y)
{
    cout << "food1: " << x << endl;
    cout << "food2: " << y << endl;
}