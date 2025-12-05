#include <bits/stdc++.h>
using namespace std;

void nextPer(int a[], int n)
{
    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(a, a + n);
    }
    for (int i = n - 1; i >= index; i--)
    {
        if (a[i] > a[index])
        {
            swap(a[i], a[index]);
            break;
        }
    }
    sort(a + index + 1, a + n);
}
int main()
{

    int n;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    nextPer(a, n);
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    return 0;
}