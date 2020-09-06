//An element of array is leader if it is greater than or equal to all the elements to its right side.
//Also, the rightmost element is always a leader.
#include <stdio.h>
int main()
{
    int n, j, k, flag = 1;
    scanf("%d", &n);
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        flag = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("%d", arr[n - 1]);
}