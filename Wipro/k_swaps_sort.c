#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d %d", &n,&k);
    int arr[n], i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0,temp,flag=0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if(count==k)
            {
                flag = 1;
                break;
            }
            if (arr[j] >= arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count++;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}