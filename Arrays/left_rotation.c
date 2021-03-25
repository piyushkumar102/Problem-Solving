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
        temp = a[0];
        for (j = 0; j < n - 1; j++)
        {
            a[j] = a[j + 1];
        }
        a[n - 1] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

/*
Input: 5 3
Array: 1 2 3 4 5
Output: 4 5 1 2 3
*/
