#include <stdio.h>
int main()
{
	int c, i, nw, no, j;
	nw = no = 0;
	int a[10] = {0};
	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
			++a[c - '0'];
		else
			++no;
	}
	printf("Digits : ");
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("...\n");
		for (j = 0; j < a[i]; j++)
		{
			printf("~");
		}
	}
	printf("\nOther Char : %d", no);
}
