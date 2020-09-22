#include <stdio.h>
int main()
{
    char a[25];
    int i = 0, len, score = 0;
    for (i = 0; i < 25; i++)
    {
        scanf("%c", &a[i]);
        if (a[i] == '\0')
        {
            break;
        }
    }
    len = i;
    for (i = 0; i < len; i++)
    {
        if ((a[i] == 'q') || (a[i] == 'z') || (a[i] == 'Q') || (a[i] == 'Z'))
            score = score + 10;
        else if ((a[i] == 'j') || (a[i] == 'x') || (a[i] == 'J') || (a[i] == 'X'))
            score = score + 8;
        else if ((a[i] == 'd') || (a[i] == 'g') || (a[i] == 'D') || (a[i] == 'G'))
            score = score + 2;
        else if ((a[i] == 'f') || (a[i] == 'h') || (a[i] == 'v') || (a[i] == 'w') || (a[i] == 'y') || (a[i] == 'F') || (a[i] == 'H') || (a[i] == 'V') || (a[i] == 'W') || (a[i] == 'Y'))
            score = score + 4;
        else if ((a[i] == 'b') || (a[i] == 'c') || (a[i] == 'm') || (a[i] == 'p') || (a[i] == 'B') || (a[i] == 'C') || (a[i] == 'M') || (a[i] == 'P'))
            score = score + 3;
        else if ((a[i] == 'k') || (a[i] == 'K'))
            score = score + 5;
        else if (a[i] == ' ')
        {
        }
        else
            score++;
    }
    printf("%d", score);
    return 0;
}