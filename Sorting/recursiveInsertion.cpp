#include <bits/stdc++.h>
using namespace std;
// Recursive insertion sort: sort first n-1 elements, then insert nth element into the sorted prefix
void insertion_sort_recursive(int arr[], int n)
{
    // Base case
    if (n <= 1)
        return;

    // Sort first n-1 elements
    insertion_sort_recursive(arr, n - 1);

    // Insert last element at its correct position in sorted array arr[0..n-2]
    int last = arr[n - 1];
    int j = n - 2;

    // Shift elements of arr[0..n-2], that are greater than last, to one position ahead
    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

// Keep original function name for compatibility with main
void insertion_sort(int arr[], int n)
{
    insertion_sort_recursive(arr, n);
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
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    return 0;
}