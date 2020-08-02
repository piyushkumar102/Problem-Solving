#include <stdio.h>
int main()
{
    float amount;
    scanf("%f", &amount);
    float inr = amount * 72.10;
    printf("%.2f USD = %.2f INR\n", amount, inr);
}