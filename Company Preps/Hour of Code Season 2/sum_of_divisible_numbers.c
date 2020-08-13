//You are required to calculate the sum of the numbers divisible by 3 and 5, between 'a' and 'b' both inclusive and return same.

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int i, sum = 0;
    for (i = a; i <= b; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
            sum = sum + i;
    }
    printf("%d", sum);
}