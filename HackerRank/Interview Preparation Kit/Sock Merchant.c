#include <stdio.h>
int main()
{
    int n, sum = 0;
    int a[100], i, count = 0, b[100] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[a[i] - 1]++;
    }
    for (i = 0; i < 100; i++)
    {
        if (b[i] == 0)
        {
            continue;
        }
        else
        {
            b[i] = b[i] / 2;
            sum = sum + b[i];
        }
    }
    printf("%d", sum);
}