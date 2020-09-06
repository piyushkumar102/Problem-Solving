#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i, j, k, max = 0, start = 0, end = 0, flag = 1;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        max = 0;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                int profit = arr[j] - arr[i];
                if (profit > max)
                {
                    max = arr[j] - arr[i];
                    start = i;
                    end = j;
                    flag = 1;
                }
            }
            else
            {
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d %d\n", start, end);
            i = start - 1;
        }
    }
}