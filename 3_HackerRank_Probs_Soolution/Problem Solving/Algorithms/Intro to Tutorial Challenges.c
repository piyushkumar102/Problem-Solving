#include <stdio.h>
int main()
{
    int i, j, k;
    scanf("%d", &k);
    scanf("%d", &j);
    int arr[j];
    for (i = 0; i < j; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[j] == k)
        {
            printf("%d", i);
        }
    }
    for (i = 0; i < j; i++)
    {
        if (arr[i] == k)
        {
            printf("%d", i);
            break;
        }
    }
}
