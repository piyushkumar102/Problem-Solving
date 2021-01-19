#include <stdio.h>
#include <math.h>
int main()
{
    int n, c, j[10000], temp, d;
    long long int sum;
    scanf("%d", &n);
    if (n <= 40)
    {
        for (c = 0; c < n; c++)
        {
            scanf("%d ", &j[c]);
        }
        for (c = 0; c < n; c++)
        {
            for (d = 0; d < n; d++)
            {
                if (j[c] > j[d])
                {
                    temp = j[c];
                    j[c] = j[d];
                    j[d] = temp;
                }
            }
        }
        for (c = 0; c < n; c++)
        {
            sum = sum + (pow(2, c) * j[c]);
        }
        printf("%llu", sum);
    }
    return 0;
}
