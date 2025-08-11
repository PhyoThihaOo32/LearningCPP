#include <iostream>

using namespace std;

int main()
{

    /*
    foreach loop = a foreach loop is done using the range-based for loop syntax.
It’s especially nice for arrays because you don’t need to manually handle i and indexing.
    */

    string city[] = {"New York", "Tokyo", "Yangon", "Sydney"};

    for (string city : city)
    {
        cout << city << endl;
    }

    return 0;
}