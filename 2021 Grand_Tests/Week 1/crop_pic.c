#include <stdio.h>
int main()
{
    int l, w, h;
    scanf("%d %d %d", &l, &w, &h);
    if (l == w && l == h && w == h)
    {
        printf("ACCEPTED");
    }
    else if (w < l || h < l)
    {
        printf("CHANGE");
    }
    else
    {
        printf("CROP");
    }
}