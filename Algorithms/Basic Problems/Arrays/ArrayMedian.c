#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a[100], b[100], n, n1, c[100], size, f, i, k, sum = 0, median;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    size = n + n1;
    for (i = 0, k = n; k < size && i < n1; i++, k++)
    {
        c[k] = b[i];
    }

    sum = c[n / 2] + c[n1 / 2];

    median = sum / 2;
    printf("%d", median);

    return 0;
}
