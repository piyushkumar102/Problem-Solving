#include <stdio.h>
int main()
{
    int max = 0, n, count = 0;
    scanf("%d", &n);
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            count++;
        }
    }
    printf("%d", count);
}
