#include <bits/stdc++.h>
using namespace std;

vector<int> leader(int a[], int n)
{
    vector<int> temp;
    int maxi = INT_MIN;

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            temp.push_back(a[i]); // store this leader
            maxi = a[i];
        }
    }

    reverse(temp.begin(), temp.end()); // because we collected from right to left
    return temp;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> ans = leader(a, n);

    for (int x : ans)
        cout << x << " ";

    return 0;
}
