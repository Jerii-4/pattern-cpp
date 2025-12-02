#include <bits/stdc++.h>
using namespace std;

// Simple Dutch National Flag algorithm to sort 0s,1s,2s in-place
void sort012(int a[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (a[mid] == 0)
            swap(a[low++], a[mid++]);
        else if (a[mid] == 1)
            mid++;
        else
            swap(a[mid], a[high--]);
    }
}

int main()
{

    int n;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort012(a, n);

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
    return 0;
}
