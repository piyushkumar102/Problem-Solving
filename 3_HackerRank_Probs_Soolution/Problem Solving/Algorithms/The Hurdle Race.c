#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, ih, a[1000], max, i, p;
    scanf("%d %d", &n, &ih);
    max = a[0];
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    if (max > ih)
    {
        int p = max - ih;
        printf("%d", p);
    }
    else if (max < ih)
    {
        printf("0");
    }
}