#include <stdio.h>
int main()
{
    int n, jump = 0, jump1 = 0, finaljump;
    scanf("%d", &n);
    int clouds[n], i, count = 0, count1 = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &clouds[i]);
    }
    for (i = 0; i < n; i++, count++)
    {
        if (i < n - 2 && clouds[i + 2] == 0)
        {
            i = i + 1;
        }
    }
    printf("%d", count - 1);
}
