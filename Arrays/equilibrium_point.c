//the sum of elements before it is equal to the sum of elements after it.
#include <stdio.h>
int main()
{
    int n, j, k, left_sum = 0, right_sum = 0;
    scanf("%d", &n);
    int arr[n], i, temp[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        left_sum = 0;
        right_sum = 0;
        for (j = 0; j < i; j++)
            left_sum = left_sum + arr[j];
        for (k = i + 1; k < n; k++)
            right_sum = right_sum + arr[k];
        if (left_sum == right_sum)
            printf("%d", i);
    }
}

/*
Input: 5
Array: 1 2 0 2 1
Ouput: 3
*/