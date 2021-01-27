//Ranking an Array
#include <stdio.h>
int main()
{
    int rank[1000] = {0};
    int i, j, n;
    scanf("%d", &n);
    int x[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    for (i = 0; i < n; i++)
    {
        int cur = 1;
        for (j = 0; j < i; j++)
        {
            if (x[i] > x[j])
            {
                cur++;
            }
            else
            {
                rank[j]++;
            }
        }
        rank[i] = cur;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", rank[i]);
    }
}