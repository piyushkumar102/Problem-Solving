#include <stdio.h>
int main()
{
	int i;
	int s[10];
	int *p = s;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", s + i);
	}
	while (*p != '\0')
	{
		p++;
	}
	printf("%d", p);
}
