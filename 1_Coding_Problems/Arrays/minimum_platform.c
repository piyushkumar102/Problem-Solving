#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, arrival[n],departure[n], j,platform=0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arrival[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &departure[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n - 1; j++)
        {
            if(departure[i]>arrival[i+1])
                platform++;
        }
    }
    printf("%d", platform);
}