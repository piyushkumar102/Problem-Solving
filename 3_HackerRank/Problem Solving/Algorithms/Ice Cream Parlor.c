#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n, j, k, m, sum, u;
        scanf("%d", &m);
        scanf("%d", &n);
        int a[n];
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        for (j = 0; j < n; j++)
        {
            sum = 0;
            for (u = 0; u < n; u++)
            {
                if (u == j)
                {
                    continue;
                }
                else
                {
                    sum = a[j] + a[u];
                    if (sum == m)
                    {
                        printf("%d %d\n", j + 1, u + 1);
                        break;
                    }
                }
            }
            if (sum == m)
            {
                break;
            }
        }
    }
}
