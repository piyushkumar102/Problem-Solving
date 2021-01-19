#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    int arr[n], i, temp[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int flag = 1, small = 0, large = n - 1;
    for (i = 0; i < n; i++)
    {
        if (flag == 1)
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];
        flag = !flag;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }
}