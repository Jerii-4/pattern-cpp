#include <bits/stdc++.h>
using namespace std;

void spiralMatrix(vector<vector<int>> &matrix, int n)
{
    int ans[n][n];
    int left = 0, right = n - 1, top = 0, bottom = n - 1;
    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            cout << matrix[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << matrix[i][right] << " ";
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i++)
            {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
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

    spiralMatrix(matrix, n);

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