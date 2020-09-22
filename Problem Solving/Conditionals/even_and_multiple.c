#include <stdio.h>
void iseven(int x);
void ismultiple(int x);
void iseven(int x)
{
    if (x % 2 == 0)
    {
        if (x % 10 == 0)
        {
            printf("Even\n");
            printf("Multiple of 10");
        }
        else
        {
            printf("Even\n");
            printf("Not a multiple of 10");
        }
    }
    else
        printf("Not even");
}
int main()
{
    int a;
    scanf("%d", &a);
    iseven(a);
    return 0;
}