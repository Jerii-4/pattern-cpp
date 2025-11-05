#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;

    cin >> s;

    // unordered_map<char, int> mpp; O(1) average case give priority to unordered_map if failed use map
    map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    while (q--)
    {
        char number;
        cin >> number;
        cout << mpp[number] << endl;
    }

    return 0;
}
