#include <stdio.h>

int main()
{
    int d, c, l, legs;
    scanf("%d %d %d", &c, &d, &l);
    legs = (d + c) * 2;
    if (legs == l)
        printf("Yes");
    else
        printf("No");
}
