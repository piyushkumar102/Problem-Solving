#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n, array;
    scanf("%i", &n);
    int *a = malloc(sizeof(int) * n);
    for (array = 0; array < n; array++)
    {
        scanf("%i", &a[array]);
    }
    int result = simpleArraySum(n, n, a);
    printf("%d\n", result);
    return 0;
}
int simpleArraySum(int n, int array, int *a)
{
    int sum = 0;
    for (array = 0; array < n; array++)
        sum = sum + a[array];
    return sum; // Complete this function
}
