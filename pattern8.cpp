#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++) // space
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * 5 - (2 * i + 1); j++) // decreasing order of stars in middle
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++) // space
        {
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}