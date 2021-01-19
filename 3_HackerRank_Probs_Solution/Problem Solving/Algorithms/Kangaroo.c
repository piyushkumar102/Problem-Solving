#include <stdio.h>
#include <stdlib.h>
int main()
{
    int k1, k2, v1, v2, i, sum1, sum2, flag = 0;
    scanf("%d %d %d %d", &k1, &v1, &k2, &v2);
    if (k1 <= -1 || k2 <= -1 || v1 <= 0 || v2 <= 0 || k1 >= 10001 || k2 >= 10001 || v1 >= 10001 || v2 >= 10001 || k1 > k2)
    {
        exit(1);
    }
    if (k1 < k2 && v1 < v2)
    {
        flag = 0;
    }
    else
    {
        for (i = 0; i < 3000; i++)
        {
            k1 += v1;
            k2 += v2;
            if (k1 == k2)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}
