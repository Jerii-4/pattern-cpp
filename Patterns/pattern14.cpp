#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j < 'A' + i; j++) // print characters
        {
            cout << j << " ";
        }

        cout << endl;
    }
    return 0;
}