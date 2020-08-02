#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n = 10;
    float a=0,r=1.05,p;

    scanf("%f", &p);
    for (int i = 1; i < n + 1; i++)
    {
        p =a+(p*r);
        printf("%.2f\n", p);
    }
}