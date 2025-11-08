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
    int largest = 0;
    for (int i = 1; i < n; i++)
    {

        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }

    cout << largest << endl;
    return 0;
}