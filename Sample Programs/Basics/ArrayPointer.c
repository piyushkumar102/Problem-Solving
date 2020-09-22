#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], copy[n], *p = a, i, sum = 0, *c = copy;
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
        sum = sum + (*p + i);
        *(c + i) = *(p + i);
    }
    printf("Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *p + i);
    }
    printf("\nCopied Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *p + i);
    }
    printf("\nReversed Array: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", *p + i);
    }
    printf("\nSum: %d", sum);
}