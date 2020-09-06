#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int m, n, i, j, count = 0;
    scanf("%d %d", &m, &n);
    int x[m], y[n];
    for (i = 0; i < m; i++)
    {
        scanf("%d", &x[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &y[i]);
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            if (pow(x[i], y[j]) > pow(y[j], x[i]))
                count++;
    }
    printf("\n%d", count);
}