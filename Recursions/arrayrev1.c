#include <stdio.h>

void reverseArray(int arr[], int i, int n)
{

    if (i >= n / 2)
        return;

    int temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;

    reverseArray(arr, i + 1, n);
}

int main()
{
    int n;
    printf("Size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, 0, n);

    printf("Reversed: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}