#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix, int m, int n)
{
    int col1 = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                if (j != 0)
                    matrix[0][j] = 0;
                else
                    col1 = 0;
            }
        }
    }
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (matrix[i][j] != 0)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }
    }
    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < n; j++)
            matrix[0][j] = 0;
    }
    if (col1 == 0)
    {
        for (int i = 0; i < m; i++)
            matrix[i][0] = 0;
    }
}

int main()
{

    int m, n;

    if (!(cin >> m >> n))
        return 0;

    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];
    }

    setZeroes(matrix, m, n);

    for (int i = 0; i < m; ++i)
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