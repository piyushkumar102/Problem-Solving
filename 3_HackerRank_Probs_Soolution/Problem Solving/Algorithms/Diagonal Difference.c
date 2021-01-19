#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int m, sum1 = 0, sum2 = 0, sum3, i, j;
    scanf("%d", &m);
    int mat[m][m];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        sum1 = mat[i][i] + sum1;
    }
    for (i = m - 1, j = 0; i >= 0 && j < m; i--, j++)
    {
        sum2 = mat[i][j] + sum2;
    }
    sum3 = abs(sum1 - sum2);
    printf("%d", sum3);
}
