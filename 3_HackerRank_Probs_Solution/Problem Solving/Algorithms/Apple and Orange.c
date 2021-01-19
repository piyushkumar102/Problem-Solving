#include <stdio.h>
int main()
{
    int s, t, a, b, m, n, i, count1 = 0, count2 = 0;
    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);
    int apple[m], orange[n];
    for (i = 0; i < m; i++)
    {
        scanf("%d", &apple[i]);
        apple[i] = apple[i] + a;
        if (apple[i] >= s && apple[i] <= t)
        {
            count1++;
        }
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &orange[i]);
        orange[i] = orange[i] + b;
        if (orange[i] >= s && orange[i] <= t)
        {
            count2++;
        }
    }
    printf("%d\n%d", count1, count2);
}
