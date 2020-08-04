#include <stdio.h>
#include <stdlib.h>

int max_of_four(int, int, int, int);
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
    int largest;
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
                largest = a;
            else
                largest = d;
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            largest = b;
        }

        else
        {
            largest = d;
        }
    }
    else if (c > d)
    {
        largest = c;
    }
    else
    {
        largest = d;
    }
    if (b == d)
    {
        largest = c;
    }
    printf("%d", largest);
    return largest;
}
