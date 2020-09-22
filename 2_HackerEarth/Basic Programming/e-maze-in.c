#include <stdio.h>
#include <string.h>
int main()
{
    char direction[200];
    int x = 0, y = 0, i;
    scanf("%s", direction);
    for (i = 0; i < strlen(direction); i++)
    {
        if (direction[i] == 'L')
            x--;
        else if (direction[i] == 'R')
            x++;
        else if (direction[i] == 'U')
            y++;
        else if (direction[i] == 'D')
            y--;
    }
    printf("%d %d", x, y);
}