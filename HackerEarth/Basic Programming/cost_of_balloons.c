#include <stdio.h>
int main()
{
    int t, test;
    scanf("%d", &t);
    for (test = 0; test < t; test++)
    {
        int green_cost, purple_cost, green_sum = 0, purple_sum = 0, sum = 0, max = 0, min = 0;
        scanf("%d  %d", &green_cost, &purple_cost);
        if (green_cost > purple_cost)
        {
            max = green_cost;
            min = purple_cost;
        }
        else
        {
            max = purple_cost;
            min = green_cost;
        }
        int n, i, q1count = 0, q2count = 0;
        scanf("%d", &n);
        int q1[n], q2[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d %d", &q1[i], &q2[i]);
            if (q1[i] == 1)
            {
                q1count++;
            }
            if (q2[i] == 1)
            {
                q2count++;
            }
        }
        if (q1count > q2count)
        {
            max = q2count * max;
            min = q1count * min;
        }
        else
        {
            max = q1count * max;
            min = q2count * min;
        }
        sum = max + min;
        printf("%d\n", sum);
    }
}