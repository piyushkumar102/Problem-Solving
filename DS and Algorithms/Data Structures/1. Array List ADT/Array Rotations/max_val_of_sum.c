//Given an array, only rotation operation is allowed on array.
//We can rotate the array as many times as we want.
//Return the maximum possbile of summation of i*arr[i].
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i, n, temp, sum = 0, j, flag = 0, max = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 0; j < n; j++)
    {
        sum = 0;
        temp = a[n - 1];
        for (i = n - 1; i >= 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = temp;
        for (i = 0; i < n; i++)
        {
            sum = sum + (i * a[i]);
        }
        if (sum > max)
        {
            max = sum;
        }
    }
    printf("%d", max);
}