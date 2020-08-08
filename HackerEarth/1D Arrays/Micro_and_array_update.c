#include <stdio.h>
int main()
{
    int t, i, min = 0;
    long int n, k;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%ld%ld", &n, &k);
        long int a[n];
        for (i = 0; i < n; i++)
            scanf("%ld", &a[i]);
        min = a[0];
        for (i = 0; i < n; i++)
        {
            if (a[i] < min)
                min = a[i];
        }
        if (k > min)
            printf("%ld\n", k - min);
        else
            printf("0\n");
    }
}