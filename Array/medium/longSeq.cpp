#include <bits/stdc++.h>
using namespace std;

int longSeq(int a[], int n)
{
    sort(a, a + n);
    int count = 1;
    int prevNumber = INT_MIN, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == prevNumber + 1)
        {
            count++;
            prevNumber = a[i];
        }
        else if (a[i] != prevNumber)
        {
            count = 1;
            prevNumber = a[i];
        }

        maxi = max(count, maxi);
    }
    return maxi;
}

int main()
{
    int n;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int ans = longSeq(a, n);
    cout << ans << " ";
    return 0;
}