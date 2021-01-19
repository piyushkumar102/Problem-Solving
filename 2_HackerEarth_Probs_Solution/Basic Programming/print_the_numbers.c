#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int numbers[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
        printf("%d ", numbers[i]);
    }
}