#include <iostream>
using namespace std;

void printn(int i, int n)
{
    if (i > n)
        return;
    cout << "jerin" << endl;
    printn(i + 1, n);
}

int main()
{
    int i, n = 5;
    cin >> i;
    printn(i, n);

    return 0;
}