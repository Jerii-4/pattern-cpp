#include <iostream>
using namespace std;

void printn(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    printn(i + 1, n);
}

int main()
{
    int i, n = 5;
    cin >> i;
    printn(i, n);

    return 0;
}

// backtackingversion to print 1 to n
//  #include <iostream>
//  using namespace std;

// void printn(int i, int n)
// {
//     if (i < 1)
//         return;
//         printn(i - 1, n);
//     cout << i << endl;
// }

// int main()
// {
//     int i, n = 5;
//     cin >> i;
//     printn(i, n);

//     return 0;
// }