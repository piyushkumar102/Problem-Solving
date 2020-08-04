#include <assert.h>
#include <ctype.h>
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
    int n, p, a[1000000], sum = 0, amt, div, dis, i, dif;
    scanf("%d %d", &n, &p);
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
        sum += a[i];
        dif = sum - a[p];
    }
    div = dif / 2;
    scanf("%d", &amt);
    dis = amt - div;
    if (div == amt)
    {
        printf("Bon Appetit");
    }
    else
        printf("%d", dis);

    return 0;
}
