#include<stdio.h>
int main()
{
int P,at[10],bt[10],ct[10],i,n,avg;
float awt,atat;
printf("\nenter the number of process\n");
scanf("%d",&n);
int s[n];
printf("\nenter the arraival time\n");

for(i=0;i<n;i++)
{
scanf("%d",&at[i]);
}
printf("\nenter the burst time\n");

for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
}
ct[0]=bt[0];
for(i=0;i<n;i++)
{
ct[i+1]+=ct[i]+bt[i+1];
}
printf("\n \t COMPLETION TIME");
 for(i=0;i<n;i++)
 {
 printf("\nProcess%d completion time:%d\n",i+1,ct[i]);
}
return 0;
}
