#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i, n, temp, times, j;
    scanf("%d %d", &n, &times);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < times; i++)
    {
        temp = a[n - 1];
        for (j = n - 1; j >= 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
