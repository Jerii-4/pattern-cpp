#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;         // initially star is equal to i
        if (i > n)            // checks if it exceeds the total n
            star = 2 * n - i; // if it exceeds then it decreases the star count

        for (int j = 1; j <= star; j++) // prints the stars according to the star count
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}