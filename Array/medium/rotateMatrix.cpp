#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &matrix, int n)
{
    // brute force approach
    //  int ans[m][n];
    //  int i, j;
    //  for (int i = 0; i < m; i++)
    //  {
    //      for (int j = 0; j < n; j++)
    //      {
    //          ans[j][m - 1 - i] = matrix[i][j];
    //
    //      }
    //  }
    //  for (int i = 0; i < m; i++)
    //  {
    //      for (int j = 0; j < n; j++)
    //      {
    //          matrix[i][j] = ans[i][j];
    //      }
    //  }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
int main()
{

    int n;

    if (!(cin >> n))
        return 0;

    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];
    }

    rotateMatrix(matrix, n);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (j)
                cout << ' ';
            cout << matrix[i][j];
        }
        cout << '\n';
    }
    return 0;
}