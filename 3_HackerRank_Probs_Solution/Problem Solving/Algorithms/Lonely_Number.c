#include <stdio.h>
int main()
{
    int n, max = -999;
    scanf("%d", &n);
    int i, a[n], count[1000] = {0};
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        int t = a[i];
        if (a[i] >= max)
            max = a[i];
        count[t] = count[t] + 1;
    }
    int j;
    for (i = 0; i <= max; i++)
    {
        if (count[i] == 1)
        {
            printf("%d ", i);
        }
    }
}