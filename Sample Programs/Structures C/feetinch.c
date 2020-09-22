#include <stdio.h>
struct unit
{
    float feet;
    float inch;
} d1, d2;
int main()
{
    float totalfeet = 0, totalinch = 0, sum = 0;
    scanf("%f %f", &d1.feet, &d1.inch);
    scanf("%f %f", &d2.feet, &d2.inch);
    totalfeet = d1.feet + d2.feet;
    totalinch = d1.inch + d2.inch;
    printf("%.2f' - %.2f''", totalfeet, totalinch);
    return 0;
}