
#include <bits/stdc++.h>
using namespace std;

int stocks(int a[], int n)
{
    int buy = a[0], maxprofit = 0, profit;
    for (int i = 1; i < n; i++)
    {

        profit = a[i] - buy;
        maxprofit = max(profit, maxprofit);
        buy = min(buy, a[i]);
    }
    return maxprofit;
}
int main()
{

    int n;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int ans = stocks(a, n);

    cout << ans << '\n';
    return 0;
}