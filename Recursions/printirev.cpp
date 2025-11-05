#include <iostream>
using namespace std;

void printn(int i, int n)
{
    if (i < 1)
        return;
    cout << i << endl;
    printn(i - 1, n);
}

int main()
{
    int i, n = 5;
    cin >> i;
    printn(i, n);

    return 0;
}

// backtracking version to print n to 1
// #include <iostream>
// using namespace std;

// void printn(int i, int n)
// {
//     if (i > n)
//         return;
//     printn(i + 1, n);
//     cout << i << endl;
// }

// int main()
// {
//     int i, n = 5;
//     cin >> i;
//     printn(i, n);

//     return 0;
// }