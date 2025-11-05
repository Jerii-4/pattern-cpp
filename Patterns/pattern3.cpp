#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++) // it only prints the numbers in increasing order
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}