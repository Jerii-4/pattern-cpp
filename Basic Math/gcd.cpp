#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int num1 = a;
    int num2 = b;

    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    if (a == 0)
    {
        cout << "GCD of " << num1 << " and " << num2 << " is: " << b << endl;
    }
    else
    {
        cout << "GCD of " << num1 << " and " << num2 << " is: " << a << endl;
    }

    return 0;
}
