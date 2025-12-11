#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Returns the longest common prefix in a list of strings
    string longestCommonPrefix(vector<string> &str)
    {
        if (str.empty())
            return "";

        sort(str.begin(), str.end());
        string start = str[0];
        string end = str[str.size() - 1];
        string result = "";

        for (int i = 0; i <= str.size(); i++)
        {
            if (start[i] == end[i])
            {
                result += start[i];
            }
        }
        return result;
    }
};

int main()
{
    Solution solution;

    vector<string> input = {"interview", "internet", "internal", "interval"};

    string result = solution.longestCommonPrefix(input);

    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}