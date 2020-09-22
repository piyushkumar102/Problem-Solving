#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i, j, key, temp;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] >= arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    scanf("%d", &key);
    int flag = 0;
    int lb = 0;
    int ub = n - 1;
    int mid = (lb + ub) / 2;
    for (i = 0; i < n; i++)
    {
        if (key == arr[mid])
        {
            printf("\nFound at position: %d", mid + 1);
            flag = 1;
            break;
        }
        else if (key < arr[mid])
        {
            ub = mid - 1;
        }
        else if (key > arr[mid])
        {
            lb = mid + 1;
        }
        mid = (lb + ub) / 2;
    }
    if (flag == 0)
    {
        printf("\nNot found");
    }
}