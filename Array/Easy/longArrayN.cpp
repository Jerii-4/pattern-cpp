#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    long long k, sum = 0;
    int maxL = 0;
    cin >> k;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<long long, int> mpp;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum == k)
        {
            maxL = max(maxL, i + 1);
        }
        long long rem = sum - k;
        if (mpp.find(rem) != mpp.end())
        {
            maxL = max(maxL, i - mpp[rem]);
        }
        if (mpp.find(sum) == mpp.end())
            mpp[sum] = i;
    }

    cout << maxL << endl;
    return 0;
}