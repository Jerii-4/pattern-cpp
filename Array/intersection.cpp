#include <bits/stdc++.h>
using namespace std;

vector<int> IntersectionSet(vector<int> &a, vector<int> &b, int n1, int n2)
{
    int i = 0, j = 0;
    vector<int> unionArray;

    // brute
    //  int Visited[b.size()] = {0};

    // for (int i = 0; i < a.size(); i++)
    // {
    //     for (int j = 0; j < b.size(); j++)
    //     {
    //         if (a[i] == b[j] && Visited[j] == 0)
    //         {
    //             unionArray.push_back(a[i]);
    //             Visited[j] = 1;
    //             break;
    //         }
    //     }
    //     // if (a[i] < b[j])
    //     // {
    //     //     break;
    //     // }
    // }

    // optimal

    while (i < n1 && j < n2)
    {
        if (a[i] == b[j])
        {
            unionArray.push_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }

        if (i == n1)
            break;
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

    vector<int> UnionArray = IntersectionSet(a, b, n1, n2);

    for (auto it : UnionArray)
    {
        cout << it << " ";
    }

    return 0;
}