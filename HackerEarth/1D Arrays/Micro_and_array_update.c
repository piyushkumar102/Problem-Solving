#include <stdio.h>
int main()
{
    int t, ti;
    scanf("%d", &ti);
    for (ti = 0; ti < t; ti++)
    {
        int n, k, count = 0, i, j;
        scanf("%d %d", &n, &k);
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < k; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (k < a[j])
                {
                    a[j] = a[j]++;
                }
            }
            count++;
        }
        printf("%d\n", count);
    }
}