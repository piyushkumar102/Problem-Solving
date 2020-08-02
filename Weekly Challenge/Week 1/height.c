#include <stdio.h>
int main()
{
    int age, height;
    scanf("%d", &age);
    scanf("%d", &height);
    if (age > 2 && age < 4)
    {
        if (height < 55)
        {
            printf("SHORT");
        }
        else if (height <= 55 && height < 75)
        {
            printf("NORMAL");
        }
        else
        {
            printf("TALL");
        }
    }
    else if (age > 3 && age < 6)
    {
        if (height < 75)
        {
            printf("SHORT");
        }
        else if (height <= 75 && height < 100)
        {
            printf("NORMAL");
        }
        else
        {
            printf("TALL");
        }
    }
}