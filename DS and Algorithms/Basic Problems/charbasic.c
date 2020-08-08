//Char datatype Practice
#include <stdio.h>
int main()
{
    int c;
    int i;
    float avg;
    printf("Enter no. of characters:");
    scanf("%d", &c);
    char a[c];
    for (i = 0; i < c; i++)
    {
        scanf("\n%c", &a[i]);
    }
    printf("%s", &a);
}
