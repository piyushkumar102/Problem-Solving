#include<stdio.h>
int main()
{
	int c,count=0;
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
			++count;//Line Count
		printf("%d\n",count);
	}
	

}
