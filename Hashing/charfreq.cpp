#include <iostream>
using namespace std;

int main()
{
    string s;

    cin >> s;

    // only lowercase letters
    // int hash[26] = {0};
    // for (int i = 0; i < s.size(); i++)
    // {
    //     hash[s[i] - 'a']++;
    // }

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q;

    cin >> q;

    while (q--)
    {
        char ch;

        cin >> ch;
        // cout << hash[ch-'a'] << endl;  // for lowercase letters only
        cout << "Frequency: " << hash[ch] << endl;
    }

    return 0;
}
