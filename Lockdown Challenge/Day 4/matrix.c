#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    int a[n][n], b[n][n], c[n][n];
    int i, j, sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Sum : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = a[i][j] + b[i][j];
            printf("%d  ", sum);
        }
        printf("\n");
    }
    printf("Difference : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = a[i][j] - b[i][j];
            printf("%d  ", sum);
        }
        printf("\n");
    }
    printf("Product : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
}