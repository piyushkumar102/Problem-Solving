#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    int max, sum = 0,count=0;
    for (i = 0; i < n;i++)
    {
        sum = 0;
        for (j = i + 1; j < n;j++)
        {
            sum = sum + a[j];
        }
        if(a[i]>sum)
        {
            count++;
        }
    }
    printf("%d", count);
}