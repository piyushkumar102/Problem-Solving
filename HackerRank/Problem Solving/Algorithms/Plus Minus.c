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
    int a[100], inputs, pcount = 0, ncount = 0, ocount = 0;
    float pd, nd, od;
    scanf("%d", &inputs);
    for (int i = 0; i < inputs; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > 0)
        {
            pcount++;
        }
        if (a[i] < 0)
        {
            ncount++;
        }
        if (a[i] == 0)
        {
            ocount++;
        }
    }
    nd = (float)ncount / inputs;
    pd = (float)pcount / inputs;
    od = (float)ocount / inputs;
    printf("%.6f\n%.6f\n%.6f", pd, nd, od);
    return 0;
}
