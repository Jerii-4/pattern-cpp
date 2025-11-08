#include <bits/stdc++.h>
using namespace std;
int missingNo(int a[], int n)
{
    int sum = (n * (n + 1)) / 2;
    int sum2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum2 += a[i];
    }
    int i = sum - sum2;
    return i;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int missing = missingNo(arr, n);
    cout << missing << endl;
    return 0;
}
