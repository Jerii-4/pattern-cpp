#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = 0;
    arr[k] = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[++k] = arr[i];
        }
    }
    for (int i = 0; i <= k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}