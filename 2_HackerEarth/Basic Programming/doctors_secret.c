#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int length, pages;
    scanf("%d %d", &length, &pages);
    if (length <= 23 && (pages >= 500 && pages <= 1000))
    {
        printf("Take Medicine\n");
    }
    else
    {
        printf("Don't take Medicine\n");
    }
}