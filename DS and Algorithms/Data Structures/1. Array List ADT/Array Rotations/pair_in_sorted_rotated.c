//Given an array that is sorted and then rotated around an unknown point.
//Find if the array has a pair with a given sum ‘x’.
//It may be assumed that all elements in the array are distinct.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i, n, temp, sum, j, flag = 0;
    scanf("%d %d", &n, &sum);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            break;
    }
    int l = (i + 1) % 6;
    int r = i % 6;
    while (l != r)
    {
        if (a[l] + a[r] == sum)
        {
            printf("%d %d", a[l], a[r]);
            flag = 1;
            break;
        }
        else if (a[l] + a[r] < sum)
        {
            l = (l + 1) % n;
        }
        else
        {
            r = (r + n - 1) % n;
        }
    }
    if (flag == 0)
    {
        printf("No Pairs");
    }
}