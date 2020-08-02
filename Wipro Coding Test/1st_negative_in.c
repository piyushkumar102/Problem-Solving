#include<stdio.h>
int main()
{
    int n,window;
    scanf("%d %d",&n,&window);
    int array[n],i,negative[n];
    int j = window;
    for (i = 0; i < n; i++)
    {
        negative[i] == 0;
        scanf("%d", &array[i]);
        j--;
        if(array[i]<0||j<=window)
        {
            negative[i] = array[i];            
        }
        if(j==0)
        {
            j = window;
        }
    }
    for (i = 0; i < n;i++)
    {
        if(negative[i]==0)
        {
            continue;
        }
        else
        {
            printf("%d", negative[i]);
        }        
    }
}