//Convert Seconds
#include <stdio.h>
int main()
{
    int n, hr, min, sec;
    printf("Enter seconds");
    scanf("%d", &n);
    if (n < 3600)
    {
        min = n / 60;
        sec = n % 60;
        hr = min / 60;
        min = min % 60;
        printf("Converted format: %d Hour %d Mins %d Sec", hr, min, sec);
    }
    else
    {
        min = n / 60;
        sec = n % 60;
        printf("Converted format: %d Mins %d Secs", min, sec);
    }
}
