#include <stdio.h>
int main()
{
    long long int a[5], i, sum[5], sum0 = 0, max, min;
    for (i = 0; i < 5; i++)
    {
        scanf("%lld", &a[i]);
        sum0 = sum0 + a[i];
    }
    for (i = 0; i < 5; i++)
    {
        sum[i] = sum0 - a[i];
    }
    min = sum[0];
    max = sum[4];
    for (i = 0; i < 5; i++)
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
