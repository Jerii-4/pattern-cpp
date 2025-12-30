#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElementTwo(vector<int> &nums)
    {
        vector<int> result;
        int el1, el2;
        int cnt1 = 0, cnt2 = 0;

        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (cnt1 == 0 && el2 != nums[i])
            {
                el1 = nums[i];
                cnt1 = 1;
            }
            else if (cnt2 == 0 && el1 != nums[i])
            {
                el2 = nums[i];
                cnt2 = 1;
            }
            else if (el1 == nums[i])
                cnt1++;
            else if (el2 == nums[i])
                cnt2++;
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0, cnt2 = 0;
        int min = (n / 3) + 1;

        for (int i = 0; i < n; i++)
        {
            if (el1 == nums[i])
                cnt1++;
            if (el2 == nums[i])
                cnt2++;
        }
        if (cnt1 >= min)
            result.push_back(el1);
        else
            result.push_back(-1);
        if (cnt2 >= min)
            result.push_back(el2);
        else
            result.push_back(-1);

        sort(result.begin(), result.end());

        return result;
    }
};

int main()
{
    vector<int> arr = {11, 33, 33, 11, 33, 11};

    // Create an instance of Solution class
    Solution sol;

    vector<int> ans = sol.majorityElementTwo(arr);

    // Print the majority elements found
    cout << "The majority elements are: ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}