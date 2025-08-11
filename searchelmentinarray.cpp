#include <iostream>
#include <string>

using namespace std;

int searchIntArray(int array[], int size, int element);
int searchStringArray(string array[], int size, string element);

int main()
{

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    string names[] = {"Phyo", "Homer", "Bob", "Lisa"};
    int size = sizeof(numbers) / sizeof(int);
    int sizeNames = sizeof(names) / sizeof(string);
    int index;
    int element;
    string name;

    cout << "Enter the number: " << endl;
    cin >> element;

    index = searchIntArray(numbers, size, element);

    if (index != -1)
    {
        cout << "Your number: " << element << " is at index: " << index << endl;
    }

    else
    {
        cout << "Sorry " << element << " is not in the array." << endl;
    }

    cin.ignore();

    cout << "Enter the name you are searching for: " << endl;
    getline(cin, name);

    index = searchStringArray(names, sizeNames, name);

    if (index != -1)
    {
        cout << "Your number: " << name << " is at index: " << index << endl;
    }

    else
    {
        cout << "Sorry " << name << " is not in the array." << endl;
    }

    return 0;
}

int searchIntArray(int array[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {

            return i;
        }
    }
    return -1;
}

int searchStringArray(string array[], int size, string element)
{

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }

    return -1;
}