#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= +5 - i + 1; j++)
        {
            cout << j << " "; // it only prints the column number in decreasing order
        }
        cout << endl;
    }
    return 0;
}