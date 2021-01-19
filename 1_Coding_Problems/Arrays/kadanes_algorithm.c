//Max Possible Sum in contiguous Sub-Array
#include <stdio.h>
int main()
{
    int n, max_sum = -9999;
    scanf("%d ", &n);
    int a[n], total = 0, i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        total = total + a[i];
        if (total >= max_sum)
        {
            max_sum = total;
        }
        if (total < 0)
            total = 0;
    }
    printf("%d", max_sum);
}