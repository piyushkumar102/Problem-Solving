//there are numbers from 1 to N with one element missing,
//the missing number is to be found.
#include <stdio.h>
int main()
{
    int n, sum;
    scanf("%d", &n);
    int a[n], total = (n + 1) * (n + 2) / 2, i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        total = total - a[i];
    }
    printf("%d ", total);
}