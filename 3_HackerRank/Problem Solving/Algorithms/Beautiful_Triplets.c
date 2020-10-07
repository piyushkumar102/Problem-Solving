#include <stdio.h>
int main()
{
    int i, j, k;
    int n, d, count = 0;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (k = 0; k < n; k++)
    {
        for (j = 0; j < k; j++)
        {
            for (i = 0; i < j; i++)
            {
                if (i < j && j < k)
                {
                    int d1 = arr[j] - arr[i];
                    int d2 = arr[k] - arr[j];
                    if ((d1 == d2) && (d1 == d))
                        count++;
                }
            }
        }
    }
    printf("%d", count);
}