#include<stdio.h>
int main()
{
    int n,sum;
    scanf("%d %d", &n,&sum);
    int a[n], total=0,i;
    for (i = 0; i < n;i++)
    {
        scanf("%d", &a[i]);
    }
    int j,flag=0;
    for (i = 0; i < n;i++)
    {
        for (j = i; j < n;j++)
        {
            total = total + a[j];
            if(total==sum)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
            break;
    }
}