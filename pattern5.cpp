#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--) // alternative pattern: for(int j=0; j<n-i+1; j++)
        {
            cout << "* "; // it only prints the * in decreasing order
        }
        cout << endl;
    }
    return 0;
}