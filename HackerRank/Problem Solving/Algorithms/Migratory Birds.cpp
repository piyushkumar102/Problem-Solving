#include <stdio.h>
int main()
{
    int n, max = 0;
    scanf("%d", &n);
    int i, arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    int count[max];
    for (i = 0; i < max; i++)
    {
        count[i] = 0;
    }
    int temp = 0, count1 = 0;
    for (i = 0; i < n; i++)
    {
        count[arr[i] - 1]++;
    }
    for (i = 0; i < max; i++)
    {
        if (count[i] >= temp)
        {
            temp = count[i];
        }
    }
    for (i = 0; i < max; i++)
    {
        if (count[i] == temp)
        {
            count1 = i;
            break;
        }
    }
    printf("%d", count1 + 1);
}
