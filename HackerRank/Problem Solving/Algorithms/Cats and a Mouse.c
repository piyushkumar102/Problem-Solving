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
    int n, x[100], y[100], z[100], i, dif, dif2;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf(" %d", &x[i]);
        scanf(" %d", &y[i]);
        scanf(" %d", &z[i]);
        dif = z[i] - x[i];
        dif2 = z[i] - y[i];
        if (abs(dif) < abs(dif2))
        {
            printf("Cat A\n");
        }

        else if (abs(dif) == abs(dif2))
        {
            printf("Mouse C\n");
        }
        else if (abs(dif) > abs(dif2))
        {
            printf("Cat B\n");
        }
    }
    return 0;
}