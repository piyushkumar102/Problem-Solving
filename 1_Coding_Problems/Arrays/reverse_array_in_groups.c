#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n], i, j, temp;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int rev = k, end = n;
    for (i = 0; i < k - 1; i++)
    {
        temp = arr[i];
        arr[i] = arr[k - 1];
        arr[k - 1] = temp;
        k--;
    }
    for (i = rev; i < n; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1];
        arr[n - 1] = temp;
        n--;
    }
    for (i = 0; i < end; i++)
    {
        printf("%d ", arr[i]);
    }
}