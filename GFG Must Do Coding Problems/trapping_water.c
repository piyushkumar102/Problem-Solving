//Given an array arr[] of N non-negative integers
//representing height of blocks at index i as Ai where the width of each block is 1.
//Compute how much water can be trapped in between blocks after raining.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    int arr[n], i, sum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] <= arr[0])
            sum = sum + (arr[i] - arr[0]);
    }
    printf("%d", abs(sum));
}
