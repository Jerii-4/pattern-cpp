#include <bits/stdc++.h>
using namespace std;

bool CheckAnagrams(string s, string t)
{
    if (s.length() != t.length())
        return false;

    char freq[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'A']++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        freq[t[i] - 'A']--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
            return false;
    }
    return true;
}

int main()
{
    string Str1 = "INTEGER";
    string Str2 = "TEGERNI";

    // Check if the strings are anagrams and output the result
    if (CheckAnagrams(Str1, Str2))
        cout << "True" << endl; // Output "True" if they are anagrams
    else
        cout << "False" << endl; // Output "False" if they aren't anagrams

    return 0;
}
