#include <stdio.h>
int main()
{
    int n, l, sum = 0, j = 0;
    scanf("%d %d", &n, &l);
    for (int i = n; j < l; i++)
    {
        if (i % 12 == 0)
        {
            printf("%d\n", i);
            sum = sum + i;
            j++;
        }
    }
    printf("%d", sum);
}