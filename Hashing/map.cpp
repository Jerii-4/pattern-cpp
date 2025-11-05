#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    while (q--)
    {
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }

    return 0;
}
