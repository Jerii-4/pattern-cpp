#include <iostream>
using namespace std;

int main() // combination of pattern 7 and 8
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++) // space
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++) // star
        {
            cout << "*";
        }

        for (int j = 0; j < 5 - i - 1; j++) // space
        {
            cout << " ";
        }
        cout << endl;
    }
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