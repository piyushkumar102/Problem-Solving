#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, a[n], first = 0, last = n - 1, temp[n], flag = 1;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (flag == 1)
        {
            temp[i] = a[last--];
        }
        else
        {
            temp[i] = a[first++];
        }
        flag = !flag;
        printf("%d ", temp[i]);
    }
}