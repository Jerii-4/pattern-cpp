

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;

    vector<pair<int, int>> arr(n);
    // {value, original_index}

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }

    int target;
    cout << "Enter target: ";
    cin >> target;
    i = 0;
    int j = n - 1;
    sort(arr.begin(), arr.end());
    while (i < j)
    {

        if (arr[i].first + arr[j].first == target)
        {
            cout << arr[i].second << " " << arr[j].second << endl;
            break;
        }
        else if (arr[i].first + arr[j].first < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}