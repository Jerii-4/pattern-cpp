#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isomorphicString(string s, string t)
    {
        int m[256] = {0};
        int n[256] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            if (m[s[i]] != n[t[i]])
            {
                return false;
            }
            else
            {
                m[s[i]]++;
                n[t[i]]++;
            }
        }
        return true;
    }
};

// Main function to test the method
int main()
{
    // Create object of Solution
    Solution solution;

    // Sample input strings
    string s = "paper";
    string t = "title";

    // Check if strings are isomorphic
    if (solution.isomorphicString(s, t))
    {
        cout << "Strings are isomorphic." << endl;
    }
    else
    {
        cout << "Strings are not isomorphic." << endl;
    }

    return 0;
}
