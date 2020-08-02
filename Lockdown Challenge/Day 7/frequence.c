#include<stdio.h>
#include<string.h>
int main()
{
    char list[100][100];
    int i,j,k,count=0;
    for(i=0;i<5;i++)
    {
        scanf("%s",&list[i]);
        printf("%c\n",list[i][0]);
        if(list[i][0]==' ')
        count++;
    }
    for(i=0;i<5;i++)
    {
        
        printf("%s 1\n",list[i]);

    }
    printf("%d",count);

}