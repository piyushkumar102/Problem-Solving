#include <stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (a[i] < a[j])
            {
                break;
            }
        }
        if (j == n)
        {
            printf("-1 ");
        }
        else
        {
            for (k = j; k < n; k++)
            {
                if (a[j] > a[k])
                {
                    printf("%d ", a[k]);
                    break;
                }
            }
            if (k == n)
            {
                printf("-1 ");
            }
        }
    }

    // your code goes here

    return 0;
}