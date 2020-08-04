#include <stdio.h>
int main()
{
    int i, n, valleys = 0;
    scanf("%d", &n);
    char move[n];
    int u_count = 0;
    scanf("%s", move);
    for (i = 0; i < n; i++)
    {
        if (move[i] == 'U')
        {
            u_count++;
        }
        else if (move[i] == 'D')
        {
            u_count--;
        }
        if (u_count == 0 && move[i] == 'U')
        {
            valleys++;
        }
    }
    printf("%d", valleys);
}
