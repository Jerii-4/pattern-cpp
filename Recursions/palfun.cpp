#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str, int i, int n)
{
    if (i >= n / 2)
        return true;

    if (str[i] != str[n - 1 - i])
        return false;

    return isPalindrome(str, i + 1, n);
}

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;

    cout << isPalindrome(str, 0, str.length());
    cout << endl;

    return 0;
}
