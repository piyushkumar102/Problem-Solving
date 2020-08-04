#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch, s[100], s1[100];
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", s1);
    printf("%c", ch);
    printf("\n%s", s);
    printf("\n%s", s1);
    return 0;
}