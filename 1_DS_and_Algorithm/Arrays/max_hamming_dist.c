//Given an array of n elements,
//create a new array which is a rotation of given array
//and hamming distance between both the arrays is maximum.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i, n, temp, max = 0, j, flag = 0, count = 0;
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    for (j = 0; j < n; j++)
    {
        count = 0;
        temp = b[n - 1];
        for (i = n - 1; i >= 0; i--)
        {
            b[i] = b[i - 1];
        }
        b[0] = temp;
        for (i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                count++;
                if (count > max)
                {
                    max = count;
                }
            }
            else
            {
                count = 0;
            }
        }
    }
    printf("%d", max);
}