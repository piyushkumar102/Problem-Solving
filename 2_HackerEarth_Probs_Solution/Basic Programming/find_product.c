#include <stdio.h>
int main()
{
    long int n, num, product = 1, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        product = (product * num) % (1000000007);
    }
    printf("%ld", product);
}