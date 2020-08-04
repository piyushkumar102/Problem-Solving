#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int getWays(int squares_size, int *squares, int d, int m)
{
    int j, k = 1, t = m, sum = 0, count = 0;
    for (int i = 0; i < squares_size; i++)
    {
        sum = squares[i];
        for (j = k; j < t; j++)
        {
            sum += squares[j];
        }
        if (sum == d)
        {
            count++;
        }
        k++;
        t++;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *s = malloc(sizeof(int) * n);
    for (int s_i = 0; s_i < n; s_i++)
    {
        scanf("%d", &s[s_i]);
    }
    int d;
    int m;
    scanf("%d %d", &d, &m);
    int result = getWays(n, s, d, m);
    printf("%d\n", result);
    return 0;
}