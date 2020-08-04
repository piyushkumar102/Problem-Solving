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
            …
            {
                max = q1count * max;
                min = q2count * min;
            }
        sum = max + min;
        printf("%d\n", sum);
    }
}