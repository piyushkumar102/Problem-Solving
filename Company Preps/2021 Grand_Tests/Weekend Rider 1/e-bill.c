#include <stdio.h>
int main()
{
    long int units, start, end;
    scanf("%ld", &start);
    scanf("%ld", &end);
    if (start <= end)
    {
        units = end - start;
        double billpay = 0;
        if (units <= 100)
            billpay = 0;
        else if (units <= 200)
            billpay = ((units - 100) * 2) + 20;
        else if (units <= 500)
            billpay = (200 + (units - 200) * 3) + 30;
        else
            billpay = (350 + 1380 + (units - 500) * 6.6) + 50;
        printf("Rs. %.2lf", billpay);
    }
    else
        printf("Invalid Input");
}