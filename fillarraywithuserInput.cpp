#include <iostream>
#include <string>

using namespace std;

int main()
{

    string foods[5];
    string temp;

    cout << "Enter the foods and 'q' to Quit" << endl;

    for (int i = 0; i < size(foods); i++)
    {

        getline(cin, temp);
        if (temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }

    cout << "Here is your Fav Foods!" << endl;
    for (int i = 0; !foods[i].empty(); i++)
    {
        cout << foods[i] << endl;
    }

    return 0;
}
