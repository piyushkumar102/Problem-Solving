//Convert Seconds
#include <stdio.h>
int main()
{
    int n, hr, min, sec;
    printf("enter seconds");
    scanf("%d", &n);
    if (n < 3600)
    {
        min = n / 60;
        sec = n % 60;
        hr = min / 60;
        min = min % 60;
        printf("converted format %d hour %d mins %d sec", hr, min, sec);
    }
    else
    {
        min = n / 60;
        sec = n % 60;
        printf("converted format %d mins %d secs", min, sec);
    }
}
