#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to remove outer parentheses
    string removeOuterParentheses(string s)
    {
        string result = "";
        int count = 0;

        for (auto ch : s)
        {
            if (ch == '(')
            {
                if (count > 0)
                    result += ch;
                count++;
            }
            else
            {
                count--;
                if (count > 0)
                    result += ch;
            }
        }
        return result;
    }
};
int main()
{
    string s = "(()())(())";
    // Create object of Solution class
    Solution sol;

    // Get result
    string ans = sol.removeOuterParentheses(s);

    // Print result
    cout << "The result is: " << ans << endl;

    return 0;
}