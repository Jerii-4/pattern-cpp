#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        char x = 'A' + i;
        for (int j = 0; j <= i; j++) // print characters
        {
            cout << x << " ";
        }

        cout << endl;
    }
    return 0;
}