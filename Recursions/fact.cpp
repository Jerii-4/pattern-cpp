#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    //  printn(n, 0);
    int sum = fact(n);
    cout << "factorial: " << sum << endl;

    return 0;
}