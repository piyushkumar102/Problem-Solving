#include <stdio.h>
int main()
{
    int n, count = 0, max = 0;
    scanf("%d", &n);
    int i, a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
        }
    }
    int deletion = n - max;
    printf("Min deletions to make all elements of array same: %d ", deletion);
}