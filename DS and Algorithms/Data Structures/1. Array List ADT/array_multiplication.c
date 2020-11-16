#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
        sum = a[i] * b[i];
        printf("%d ", sum);
    }
}