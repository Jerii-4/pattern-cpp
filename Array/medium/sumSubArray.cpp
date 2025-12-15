#include <bits/stdc++.h>
using namespace std;

int countSubarraysWithSumK(const vector<int> &arr, int k)
{
    unordered_map<int, int> prefixCount;
    prefixCount[0] = 1;

    int prefixSum = 0;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        prefixSum += arr[i];
        int remove = prefixSum - k;
        if (prefixCount.find(remove) != prefixCount.end())
        {
            count += prefixCount[remove];
        }
        prefixCount[prefixSum]++;
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n))
        return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int k;
    cin >> k;

    int result = countSubarraysWithSumK(arr, k);
    cout << result << '\n';

    return 0;
}
