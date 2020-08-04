#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n], i, sum[n], sum0 = 0, max, min;
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        sum0 = sum0 + a[i];
    }
    for (i = 0; i < n; i++)
    {
        sum[i] = sum0 - a[i];
    }
    min = sum[0];
    max = sum[n - 1];
    for (i = 0; i < n; i++)
    {
        if (sum[i] >= max)
        {
            max = sum[i];
        }
        if (sum[i] <= min)
        {
            min = sum[i];
        }
    }
    printf("%lld %lld", min, max);
}
