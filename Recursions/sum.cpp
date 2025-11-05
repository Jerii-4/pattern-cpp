#include <iostream>
using namespace std;

// parametric version
// void printn(int i, int sum)
// {
//     if (i < 1)
//     {
//         cout << "sum: " << sum << endl;
//         return;
//     }
//     printn(i - 1, sum + i);
// }

// functional version

int printi(int i)
{
    if (i == 0)
    {
        return 0;
    }
    return i + printi(i - 1);
}

int main()
{
    int n;
    cin >> n;
    //  printn(n, 0);
    int sum = printi(n);
    cout << "sum: " << sum << endl;

    return 0;
}