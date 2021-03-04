#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n], i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (i < j)
            {
                if ((a[i] + a[j]) % k == 0)
                {
                    count++;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}
