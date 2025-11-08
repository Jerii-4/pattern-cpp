#include <bits/stdc++.h>
using namespace std;

vector<int> unionSet(vector<int> &a, vector<int> &b)
{
    int i = 0, j = 0;
    vector<int> unionArray;

    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            if (unionArray.size() == 0 || unionArray.back() != a[i])
            {
                unionArray.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (unionArray.size() == 0 || unionArray.back() != b[j])
            {
                unionArray.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < a.size())
    {
        if (unionArray.size() == 0 || unionArray.back() != a[i])
        {
            unionArray.push_back(a[i]);
        }
        i++;
    }

    while (j < b.size())
    {
        if (unionArray.size() == 0 || unionArray.back() != b[j])
        {
            unionArray.push_back(b[j]);
        }
        j++;
    }

    return unionArray;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> a(n1), b(n2);
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n2; j++)
    {
        cin >> b[j];
    }

    vector<int> UnionArray = unionSet(a, b);

    for (auto it : UnionArray)
    {
        cout << it << " ";
    }

    return 0;
}