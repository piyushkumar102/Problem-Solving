#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int power(int, int, int);
int main()
{
    int n, c;
    scanf("%d", &n);
    if (n < 1 || n >= 10001)
    {
        exit(1);
    }
    scanf("%d", &c);
    if (c <= 1 || c >= 11)
    {
        exit(1);
    }
    printf("%d", power(n, c, 1));
}
int power(int n, int c, int num)
{
    if (pow(num, c) < n)
        return power(n, c, num + 1) + power(n - pow(num, c), c, num + 1);
    else if (pow(num, c) == n)
        return 1;
    else
        return 0;
}
