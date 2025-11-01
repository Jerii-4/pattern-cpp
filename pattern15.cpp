#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        char x = 'A' + i;
        for (char j = 'A'; j < 'A' + n - i + 1; j++) // print characters
        {
            cout << x << " ";
        }

        cout << endl;
    }
    return 0;
}