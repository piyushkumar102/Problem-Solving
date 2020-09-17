#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, e;
    float c, d, f;
    scanf("%d%d", &a, &b);
    scanf("%f%f", &c, &d);
    e = a + b;
    f = c + d;
    int g = a - b;
    float h = c - d;
    printf("%d %d", e, g);
    printf("\n%.1f %.1f", f, h);
    return 0;
}