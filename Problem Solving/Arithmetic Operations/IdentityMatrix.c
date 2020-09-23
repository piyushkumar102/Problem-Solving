#include <stdio.h>
int main()
{
    int m, i, count1 = 0, count0 = 0, j;
    scanf("%d", &m);
    int a[m][m];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == j)
            {
                if (a[i][j] == 1)
                {
                    count1++;
                }
            }
            else
            {
                if (a[i][j] == 0)
                {
                    count0++;
                }
            }
        }
    }
    if (((m * m) - count1) == count0)
    {
        printf("Identity Matrix");
    }
    else
    {
        printf("Not an Identity Matrix");
    }
}