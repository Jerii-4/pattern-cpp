#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i < 2 * n - 1; i++)
    {
        for (int j = 1; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int down = (2 * n - 2) - i;
            int right = (2 * n - 2) - j;
            cout << (n - min(min(top, down), min(left, right))) << " ";
        }
        cout << endl;
    }
    return 0;
}