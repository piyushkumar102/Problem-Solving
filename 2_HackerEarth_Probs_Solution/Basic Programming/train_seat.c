#include <stdio.h>

int main(void)
{
    int t = 1;
    for (; t > 0; t--)
    {
        int n;
        scanf("%d", &n);
        if (n % 8 == 0)
        {
            printf("%dSL", n - 1);
        }
        if (n % 8 == 1)
        {
            printf("%dLB", n + 3);
        }
        if (n % 8 == 2)
        {
            printf("%dMB", n + 3);
        }
        if (n % 8 == 3)
        {
            printf("%dUB", n + 3);
        }
        if (n % 8 == 4)
        {
            printf("%dLB", n - 3);
        }
        if (n % 8 == 5)
        {
            printf("%dMB", n - 3);
        }
        if (n % 8 == 6)
        {
            printf("%dUB", n - 3);
        }
        if (n % 8 == 7)
        {
            printf("%dSU", n + 1);
        }
    }
    return 0;
}