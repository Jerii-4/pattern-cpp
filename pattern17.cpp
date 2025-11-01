#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++) // space
        {
            cout << " ";
        }
        char x = 'A';

        for (int j = 0; j < 2 * i + 1; j++) // star
        {
            cout << x;
            if (j < (2 * i + 1) / 2)
                x++;
            else
                x--;
        }

        for (int j = 0; j < n - i - 1; j++) // space
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}