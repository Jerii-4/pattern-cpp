#include <stdio.h>

// Function to find minimum of four numbers
int min4(int a, int b, int c, int d)
{
    int min1 = a < b ? a : b;
    int min2 = c < d ? c : d;
    return min1 < min2 ? min1 : min2;
}

int main()
{
    int n = 4; // Size of the pattern

    // Loop for each row
    for (int i = 0; i < 2 * n - 1; i++)
    {
        // Loop for each column
        for (int j = 0; j < 2 * n - 1; j++)
        {
            // Calculate distance from borders
            int top = i;
            int left = j;
            int bottom = (2 * n - 2) - i;
            int right = (2 * n - 2) - j;

            // Print n minus the minimum distance to any border
            printf("%d ", n - min4(top, bottom, left, right));
        }
        printf("\n");
    }
    return 0;
}