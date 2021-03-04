#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, a[n], min, max, max_count = 0, min_count = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i == 0)
        {
            min = a[i];
            max = a[i];
        }
        else
        {
            if (a[i] > max)
            {
                max = a[i];
                max_count++;
            }
            if (a[i] < min)
            {
                min = a[i];
                min_count++;
            }
        }
    }
    printf("%d %d", max_count, min_count);
}