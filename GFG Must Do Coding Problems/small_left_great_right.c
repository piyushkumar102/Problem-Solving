//Find the first element in array such that all of its left elements are smaller
//and all right elements to it are greater than it.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i, j, k, lower = 1, greater = 1;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        lower = 1, greater = 1;
        printf("%d ", arr[i]);
        for (j = 0; j < i; j++)
        {
            if (arr[j] >= arr[i])
            {
                lower = 0;
            }
        }
        for (k = i + 1; k < n; k++)
        {
            if (arr[k] <= arr[i])
            {
                greater = 0;
            }
        }
        if (lower == 1 && greater == 1)
        {
            printf("\n%d", arr[i]);
        }
        printf("\n");
    }
}