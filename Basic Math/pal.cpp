#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dup = n;
    int rev = 0;

    while (n > 0)
    {
        int last = n % 10;

        n = n / 10;
        rev = (rev * 10) + last;
    }
    if (rev == dup)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}