//count all the triplets such that
//sum of two elements equals the third element.
#include <stdio.h>
int main()
{
    int n, sum;
    scanf("%d", &n);
    int a[n], total = 0, i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            else
            {
                total = a[i] + a[j];
                for (int k = 0; k < n; k++)
                {
                    if (total == a[k])
                    {
                        count++;
                        printf("%d %d\n", a[i], a[j]);
                    }
                }
            }
        }
    }
    printf("Triplets: %d", count / 2);
}

/*
Input: 5
Array: 1 2 3 4 5
1 2
1 3
1 4
2 1
2 3
3 1
3 2
4 1
Triplets: 4
*/