#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, last, sum, i;
    scanf("%d", &n);
    for (i = 0; i < 5; i++)
    {
        last = n % 10;
        sum = sum + last;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}