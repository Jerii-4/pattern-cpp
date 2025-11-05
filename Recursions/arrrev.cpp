// 2 pointers approach
#include <iostream>
using namespace std;

void rev(int i, int j, int a[])
{
    if (i >= j)
        return;
    swap(a[i], a[j]);
    rev(i + 1, j - 1, a);
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

    rev(0, n - 1, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}