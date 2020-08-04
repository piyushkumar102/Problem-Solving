#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	int i;
	scanf("%s",string);
	for(i=0;i<strlen(string);i++)
	{
		if(string[i]>=65 && string[i]<=90)
		{
		    printf("%c",string[i]+32);
		}
		else
			printf("%c",string[i]-32);

	}
}