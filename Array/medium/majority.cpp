#include <bits/stdc++.h>
using namespace std;

int majority(int a[], int n)
{
    int element = a[0];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            element = a[i];
            count = 1;
        }
        else if (a[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            count1++;
        }
    }
    if (count1 > n / 2)
    {
        return element;
    }
    else
    {
        return -1; // No majority element
    }
}

int main()
{

    int n;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int ans = majority(a, n);

    cout << ans << '\n';
    return 0;
}