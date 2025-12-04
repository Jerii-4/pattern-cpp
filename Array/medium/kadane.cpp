
#include <bits/stdc++.h>
using namespace std;

int kadane(int a[], int n)
{
    int maxi = INT_MIN;
    int sum = 0;
    int start, starti, endi;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
            start = i;
        sum = sum + a[i];
        maxi = max(sum, maxi);
        starti = start;
        endi = i;

        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << starti << " " << endi << endl;
    return maxi;
}

int main()
{

    int n;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int ans = kadane(a, n);

    cout << ans << '\n';
    return 0;
}