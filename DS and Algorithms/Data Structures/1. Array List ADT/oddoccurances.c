#include <stdio.h>
int main()
{
    int c;
    int d;
    int count = 0;
    int i, j;
    float avg;
    printf("Enter no. of inputs");
    scanf("%d", &c);
    int a[c];
    for (i = 0; i < c; i++)
    {
        scanf("\n%d", &a[i]);
    }
    for (i = 0; i < c; i++)
    {
        count = 1;
        for (j = i + 1; j <= c; j++)
        {
            if (a[i] == a[j])
                count++;
        }

        if (count % 2 != 0 && count >= 2)
            printf("\n%dRepeating odd number of times", a[i]);
    }
    return 0;
}
