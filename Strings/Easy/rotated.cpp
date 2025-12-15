#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool rotateString(string &s, string &goal)
    {
        if (s.length() != goal.size())
            return false;
        string temp = s + s;
        if (temp.find(goal) != string::npos)
            return true;
        return false;
    }
};

int main()
{
    Solution sol;

    string s = "rotation";
    string goal = "tionrota";
    cout << (sol.rotateString(s, goal) ? "true" : "false") << endl;

    return 0;
}