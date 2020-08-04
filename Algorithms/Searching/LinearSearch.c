//Linear Search
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i, n, key, flag = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
    }
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            break;
        }
        else
            flag = 0;
    }
    if (flag == 1)
        printf("True");
    else if (flag == 0)
        printf("False");
    return 0;
}
