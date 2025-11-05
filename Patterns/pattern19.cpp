#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int x1 = 0;
    int x2 = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++) // stars
        {
            cout << "*";
        }

        for (int j = 0; j < x1; j++) // space
        {
            cout << " ";
        }

        for (int j = 1; j <= n - i; j++) // stars
        {
            cout << "*";
        }
        x1 = x1 + 2;
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // stars
        {
            cout << "*";
        }

        for (int j = 0; j < x2; j++) // space
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) // stars
        {
            cout << "*";
        }
        x2 = x2 - 2;
        cout << endl;
    }

    return 0;
}