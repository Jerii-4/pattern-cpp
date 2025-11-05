#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int x = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        for (int j = 1; j <= star; j++) // prints the stars according to the star count
        {
            cout << "*";
        }
        for (int j = 1; j <= x; j++) // prints the spaces
        {
            cout << " ";
        }

        for (int j = 1; j <= star; j++) // prints the stars according to the star count
        {
            cout << "*";
        }
        if (i < n)
            x -= 2;
        else
            x += 2;
        cout << endl;
    }
    return 0;
}