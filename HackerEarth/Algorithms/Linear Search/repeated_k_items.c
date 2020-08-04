#include <stdio.h>
int main()
{
    long int n, k;
    scanf("%ld", &n);
    long int number[n], count[n], max = 0;
    long int i, j;
    for (i = 0; i < n; i++)
    {
        number[i] = 0;
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        scanf("%ld", &number[i]);
        count[number[i]]++;
    }
    scanf("%ld", &k);
    for (i = 0; i < n; i++)
    {
        if (k == count[i])
        {
            printf("%ld", i);
            break;
        }
    }
}