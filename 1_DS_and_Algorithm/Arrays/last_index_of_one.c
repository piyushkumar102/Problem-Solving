#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i, latest_index;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 1)
            latest_index = i;
        if (arr[i] == 1 || arr[i] == 0)
            continue;
    }
    printf("\nLast Index of 1: %d", latest_index);
}