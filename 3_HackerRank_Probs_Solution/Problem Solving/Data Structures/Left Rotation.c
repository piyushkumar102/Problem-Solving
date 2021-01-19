#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, n, a[1000000], temp, times;
    scanf("%d %d", &n, &times);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[(i + n - times) % n]);
        if (a[i] < 0)
        {
            exit(1);
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
