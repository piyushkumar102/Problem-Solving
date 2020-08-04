#include<stdio.h>
int main()
{
	int c;
	while((c=getchar())!=EOF)
	{
		if(c=='\t')
		{
			putchar('\\');
			putchar('t');
		}
		if(c=='\b')
		{
			putchar('\\');
			putchar('b');
		}
		if(c=='\\')
		{
			putchar('\\');
			putchar('\\');
		}
			
	}
}
