#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int x = 2 * (n - 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= x; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        x = x - 2;
    }

    return 0;
}