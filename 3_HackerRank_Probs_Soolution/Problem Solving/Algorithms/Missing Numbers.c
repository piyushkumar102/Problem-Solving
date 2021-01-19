#include <stdio.h>
int main()
{
    int n, i, m, j, x;
    scanf("%d", &n);
    int a[10001] = {0};
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        a[x]--;
        //printf("%d ",a[x]);
    }
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &x);
        a[x]++;
        //printf("%d ",a[x]);
    }
    for (i = 0; i < 10001; i++)
    {
        if (a[i] > 0)
        {
            printf("%d ", i);
        }
    }
}
