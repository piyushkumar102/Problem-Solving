//Consider an array of distinct numbers sorted in increasing order.
//The array has been rotated(clockwise) k number of times.
//Given such an array, find the value of k.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i, n, temp, sum = 0, j, flag = 0, count = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] <= a[i + 1])
            {
                flag = 0;
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
        else
        {
            temp = a[n - 1];
            for (i = n - 1; i >= 0; i--)
            {
                a[i] = a[i - 1];
            }
            a[0] = temp;
            count++;
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
        }
    }
    printf("%d", count);
}