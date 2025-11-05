
#include <iostream>
using namespace std;

void rev(int i, int a[], int n)
{
    if (i >= n / 2)
        return;
    swap(a[i], a[n - 1 - i]);
    rev(i + 1, a, n);
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

    rev(0, arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}