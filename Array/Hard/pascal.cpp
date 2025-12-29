#include <bits/stdc++.h>
using namespace std;

class Solution

{

public:
    vector<vector<int>> generate(int N)
    {
        vector<vector<int>> ans;
        for (int i = 1; i <= N; i++)
        {
            vector<int> temp;
            long long res = 1;
            temp.push_back(1);
            for (int j = 1; j < i; j++)
            {
                res = res * (i - j);
                res = res / j;
                temp.push_back(res);
            }

            ans.push_back(temp);
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    int n = 5;

    vector<vector<int>> result = obj.generate(n);
    for (auto &row : result)
    {
        for (auto &val : row)
            cout << val << " ";
        cout << endl;
    }
}
