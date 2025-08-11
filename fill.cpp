#include <iostream>

using namespace std;

int main()
{

    // fill() = fills a range of elements with a specific value
    //          fill(begin, end, value)

    const int SIZE = 99;
    string foods[SIZE];

    fill(foods, foods + (SIZE / 2), "sushi");
    fill(foods + (SIZE / 2), foods + SIZE, "noodle");

    for (string food : foods)
    {
        cout << food << endl;
    }

    return 0;
}