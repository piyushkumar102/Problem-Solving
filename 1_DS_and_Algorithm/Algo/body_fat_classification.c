#include <stdio.h>
int main()
{
    float a, b, c;
    scanf("%f %f", &a, &b);
    c = 64 - (20 * (a / b));
    if (c >= 2 && c <= 5)
    {
        printf("%.2f : Essential fat", c);
    }
    else if (c >= 6 && c <= 13)
    {
        printf("%.2f : Athletes", c);
    }
    else if (c >= 14 && c <= 17)
    {
        printf("%.2f : Fitness", c);
    }
    else if (c >= 18 && c <= 24)
    {
        printf("%.2f : Average", c);
    }
    else
    {
        printf("%.2f : Obese", c);
    }
}