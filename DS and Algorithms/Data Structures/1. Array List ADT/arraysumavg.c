//Print the Average and Sum of an Array
#include <stdio.h>
int main()
{
    int c;
    int i;
    int sum = 0;
    float avg;
    printf("Array Size");
    scanf("%d", &c);
    int a[c];
    for (i = 0; i < c; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Sum = %d", sum);
    avg = sum / c;
    printf("\nAvg = %f", avg);
    return 0;
}
