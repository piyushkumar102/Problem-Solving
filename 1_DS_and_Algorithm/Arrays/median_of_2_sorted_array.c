#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, n1, i, k, median = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n1);
    int b[n1];
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &b[i]);
    }
    int size = n + n1;
    int c[size];
    for (i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (i = 0, k = n; k < size && i < n1; i++, k++)
    {
        c[k] = b[i];
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", c[i]);
    }
    if (size % 2 == 0)
        median = (c[(size / 2) - 1] + c[size / 2]) / 2;
    else
        median = c[size / 2];

    printf("\nMedian : %d", median);

    return 0;
}
/*
OP:
3
1 2 3
3
4 5 6
1 2 3 4 5 6 
Median : 3 
*/