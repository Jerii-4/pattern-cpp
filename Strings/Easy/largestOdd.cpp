#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Returns the largest odd number substring from the given string
    string largeOddNum(string &s)
    {
        int index;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] % 2 == 1)
            {
                index = i;
                break;
            }
        }
        return s.substr(0, index + 1);
    }
};

int main()
{
    Solution solution;
    string num = "504";
    string result = solution.largeOddNum(num);
    cout << "Largest odd number: " << result << endl;
    return 0;
}
