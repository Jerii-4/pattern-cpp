#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    long long k;
    int maxL = 0;
    cin >> k;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left = 0;
    int right = 0;
    long long sum = arr[0];

    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum = sum - arr[left];
            left++;
        }
        if (sum == k)
        {
            maxL = max(maxL, right - left + 1);
        }

        right++;
        if (right < n)
            sum = sum + arr[right];
    }
    cout << maxL << endl;
    return 0;
}