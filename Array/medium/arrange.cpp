#include <bits/stdc++.h>
using namespace std;

void arrange(int a[], int n)
{
    int j = 1;
    int k = 0;
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            temp[k] = a[i];
            k = k + 2;
        }
        else
        {
            temp[j] = a[i];
            j = j + 2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
}

int main()
{

    int n;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    arrange(a, n);
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    return 0;
}