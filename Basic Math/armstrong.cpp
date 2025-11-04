#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int originalNum = n;
    int sum = 0;

    int numberOfDigits = 0;
    while (n > 0)
    {
        numberOfDigits++;
        n = n / 10;
    }

    n = originalNum;
    while (n > 0)
    {
        int digit = n % 10;
        sum += pow(digit, numberOfDigits);
        n = n / 10;
    }

    if (sum == originalNum)
    {
        cout << originalNum << " is an Armstrong number" << endl;
    }
    else
    {
        cout << originalNum << " is not an Armstrong number" << endl;
    }

    return 0;
}