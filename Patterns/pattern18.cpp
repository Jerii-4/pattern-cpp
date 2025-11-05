#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        char x = 'A' + n - i;
        for (char j = 1; j <= i; j++) // print characters
        {
            cout << x << " ";
            x++;
        }

        cout << endl;
    }

    return 0;
}