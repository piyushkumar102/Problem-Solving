//Factorial through Recursion
#include <stdio.h>
int fact(int);
int main()
{
    int n, x, b;
    scanf("%d", &n);
    x = fact(n);
    printf("%d", x);
    return 0;
}
int fact(int a)
{
    if (a <= 1)
        return 1;
    else
        return a * fact(a - 1);
}
