#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 0; j < t; j++)
    {
        int n;
        scanf("%d", &n);
        int i, height = 0;
        for (i = 0; i < n + 1; i++)
        {
            if ((i % 2) != 0)
            {
                height = height * 2;
            }
            else
            {
                height = height + 1;
            }
        }
        printf("%d\n", height);
    }
}