#include <stdio.h>
int main(void)
{
    int n, i, j, k, temp;
    scanf("%d %d", &n, &k);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("%d ", a[k - 1]);
    return 0;
}
/*
Input: 5 2
Array: 1 2 3 4 5
Output: 2
*/