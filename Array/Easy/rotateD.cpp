#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end)
{
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void rotate(int arr[], int n, int d)
{
    d = d % n;

    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);

    // right rotation
    // reverse(arr, 0, n - 1);
    // reverse(arr, 0, d - 1);
    // reverse(arr, d, n - 1);

    // brute force approach
    //  int temp[d];
    //  for (int i = 0; i < d; i++)
    //  {
    //      temp[i] = arr[i];
    //  }

    // for (int i = d; i < n; i++)
    // {
    //     arr[i - d] = arr[i];
    // }
    // for (int i = 0; i < d; i++)
    // {
    //     arr[n - d + i] = temp[i];
    // }
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
    int d;
    cin >> d;
    rotate(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// 1 2 3 4 5

//     5 4 3 2 1

//     2 3 4 5 1

//     4 5 1 2 3
