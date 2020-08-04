#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n, j, sum = 0, left = 0, flag = 0;
        scanf("%d", &n);
        int a[n];
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            sum = sum + a[j];
        }
        for (j = 0; j < n; j++)
        {
            sum = sum - a[j];
            if (left == sum)
            {
                flag = 1;
                break;
            }
            left = left + a[j];
        }
        if (flag == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}
