#include <bits/stdc++.h>
using namespace std;
int slargest(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int ssmallest(int arr[], int n)
{
    int smallest = arr[0];
    int secondSmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
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
    int slargestNo = slargest(arr, n);
    int ssmallestNo = ssmallest(arr, n);

    cout << slargestNo << endl;
    cout << ssmallestNo << endl;
    return 0;
}