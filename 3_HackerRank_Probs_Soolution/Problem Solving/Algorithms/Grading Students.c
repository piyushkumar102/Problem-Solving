#include <stdio.h>
int main()
{
    int n, i, diff, a;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        a = arr[i];
        diff = a / 5;
        diff = diff + 1;
        diff = diff * 5;
        if ((diff - arr[i]) < 3 && arr[i] >= 38)
        {
            arr[i] = diff;
        }
        diff = 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
