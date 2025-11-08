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
    bool sorted = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1]) // If current element is less than previous
        {
            sorted = false;
            break;
        }
    }
    if (sorted)
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }

    return 0;
}