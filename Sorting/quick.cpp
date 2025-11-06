#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int low, int high)
{
    int pivot = a[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (a[i] <= pivot && i <= high - 1)
            i++;
        while (a[j] > pivot && j >= low + 1)
            j--;
        if (i < j)
            swap(a[i], a[j]);
    }
    swap(a[low], a[j]);
    return j;
}

void quick_sort(vector<int> &a, int low, int high)
{
    if (low < high)
    {
        int p = partition(a, low, high);
        quick_sort(a, low, p - 1);
        quick_sort(a, p + 1, high);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n))
        return 0; // no input
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    quick_sort(a, 0, n - 1);

    for (int i = 0; i < n; ++i)
    {
        if (i)
            cout << ' ';
        cout << a[i];
    }
    cout << '\n';
    return 0;
}
