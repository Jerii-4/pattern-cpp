#include <stdio.h>

int min4(int a, int b, int c, int d)
{
    int min1 = a < b ? a : b;
    int min2 = c < d ? c : d;
    return min1 < min2 ? min1 : min2;
}

int main()
{
    int n = 4;

    for (int i = 0; i < 2 * n - 1; i++)
    {

        for (int j = 0; j < 2 * n - 1; j++)
        {

            int top = i;
            int left = j;
            int bottom = (2 * n - 2) - i;
            int right = (2 * n - 2) - j;

            printf("%d ", n - min4(top, bottom, left, right));
        }
        printf("\n");
    }
    return 0;
}