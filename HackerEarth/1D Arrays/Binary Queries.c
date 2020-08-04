#include <stdio.h>
int main()
{
    int n, query;
    scanf("%d", &n);
    scanf("%d", &query);
    int queries[query];
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 0 || a[i] == 1)
        {
            continue;
        }
    }
    for (i = 0; i < query; i++)
    {
        scanf("%d", &queries[i]);
        if (queries[i] == 1)
        {
            int pos;
            scanf("%d", &pos);
            a[pos] = ~a[pos];
        }
        else if (queries[i] == 0)
        {
            int start, end;
            scanf("%d %d", &start, &end);
            for (i = end; i >= start; i++)
            {
                mul = mul + (a[end] * i);
            }
        }
    }
    if (mul % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD";)
    }
}