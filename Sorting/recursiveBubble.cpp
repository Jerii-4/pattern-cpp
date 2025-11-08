#include <bits/stdc++.h>
using namespace std;
// Recursive bubble sort: bubble the largest element to the end, then recurse on the rest
void bubble_sort_recursive(int arr[], int n)
{
    // Base case: size 0 or 1 is already sorted
    if (n <= 1)
        return;

    // One pass: bubble the largest element to the end of the current array
    bool didSwap = false;
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
            didSwap = true;
        }
    }

    // If no swaps happened, the array is already sorted
    if (!didSwap)
        return;

    // Recurse for the remaining array (exclude the last element which is in correct position)
    bubble_sort_recursive(arr, n - 1);
}

// Keep the original function name used by main for compatibility
void bubble_sort(int arr[], int n)
{
    bubble_sort_recursive(arr, n);
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
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    return 0;
}