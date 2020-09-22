#include <stdio.h>
int main()
{
    int temp;
    scanf("%d", &temp);
    if (temp >= -40 && temp < 10)
    {
        printf("COLD\n");
    }
    else if (temp >= 10 && temp < 20)
    {
        printf("COMFORTABLE\n");
    }
    else if (temp >= 20 && temp < 50)
    {
        printf("COMFORTABLE\n");
    }
    else if (temp <= -40 && temp >= 50)
    {
        printf("OUT OF RANGE\n");
    }
}