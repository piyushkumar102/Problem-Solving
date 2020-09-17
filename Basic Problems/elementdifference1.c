//Check if the difference between next element is 1 or -1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i, n, a[100], count = 0, b, flag = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b = a[i] - a[i + 1];
        if (b == 1 || b == -1)
        {
            count++;
        }
    }
    if (count == n - 1)
    {
        printf("true");
    }
    else
        printf("false");
    return 0;
}
