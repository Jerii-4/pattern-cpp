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

    int rotate = arr[0];
    int k = 0;

    for (int i = 1; i < n; i++)
    {
        arr[k++] = arr[i]; // also store in i-1 instead of second pointer
    }
    arr[k] = rotate;

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}
