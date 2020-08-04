#include <stdio.h>
int main()
{
    int i, t;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n, k, j, c = 0;
        scanf("%d %d", &n, &k);
        int stu[n];
        for (j = 0; j < n; j++)
        {
            scanf("%d", &stu[i]);
            if (stu[i] <= 0)
            {
                c++;
            }
        }
        if (c >= k)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}
