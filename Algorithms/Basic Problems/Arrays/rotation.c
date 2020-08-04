#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, n, a[100], temp, times;
    scanf("%d %d", &n, &times);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < 0)
        {
            exit(1);
        }
    }

    for (i = 0; i < times; i++)
    {
        temp = a[0];
        a[0] = a[i + 1];
        a[i + 1] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
