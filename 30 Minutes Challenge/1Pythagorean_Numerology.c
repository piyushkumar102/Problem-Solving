#include <stdio.h>
int digit_sum(int digit)
{
    int sum = 0, n;
    while (digit > 0 && digit < 31)
    {
        n = digit % 10;
        sum = sum + n;
        digit = digit / 10;
    }
    if (sum >= 10)
    {
        int finalsum = 0;
        finalsum=digit_sum(sum);
        printf("Final Sum:%d", finalsum);
    }
    printf("Date %d\n", sum);
    return sum;
}
int main()
{
    int date, month, year;
    scanf("%d-%d-%d", &date, &month, &year);
    int date_sum = 0, n, temp, month_sum = 0, year_sum = 0;
    date_sum = digit_sum(date);
    printf(" Date 1: %d ", date_sum);
    while (month > 0 && month < 12)
    {
        n = month % 10;
        month_sum = month_sum + n;
        month = month / 10;
    }
    printf("%d ", month_sum);
    while (year > 0)
    {
        n = year % 10;
        year_sum = year_sum + n;
        year = year / 10;
    }
    printf("%d", year_sum);
}