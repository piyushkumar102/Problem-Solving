#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int transactions[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &transactions[i]);
    }
    int q;
    scanf("%d", &q);
    int query[q];
    for (i = 0; i < q; i++)
    {
        scanf("%d", &query[i]);
    }
    int sum = 0, j, flag = -1;
    for (i = 0; i < q; i++)
    {
        flag = -1;
        sum = 0;
        for (j = 0; j < n; j++)
        {
            sum = transactions[j] + sum;
            if (sum >= query[i])
            {
                flag = 0;
                printf("%d\n", j + 1);
                break;
            }
        }
        if (flag == -1)
        {
            printf("-1\n");
        }
    }
}