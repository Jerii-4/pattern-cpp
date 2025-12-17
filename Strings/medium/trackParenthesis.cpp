#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Method to compute maximum depth of parentheses
    int maxDepth(string s)
    {
        int ans = 0;
        int current = 0;

        for (auto x : s)
        {
            if (x == '(')
            {
                current++;
            }
            if (x == ')')
            {
                current--;
            }
            ans = max(current, ans);
        }
        return ans;
    }
};

// Main function to test the method
int main()
{
    Solution sol;
    string s = "(1+(2*3)+((8)/4))+1";
    int result = sol.maxDepth(s);
    cout << "Max Depth: " << result << endl;
    return 0;
}