//Fibonnaci Series through Recursion
#include <stdio.h>
int fibo(int);
int main()
{
	int n, x, b, i = 0, j;
	printf("\nEnter number for Fibonacci:");
	scanf("%d", &b);
	for (j = 1; j <= b; j++)
	{
		printf("%d ", fibo(i));
		i++;
	}
	return 0;
}

int fibo(int a)
{
	if (a == 0)
		return 0;
	else if (a == 1)
		return 1;
	else
		return (fibo(a - 1) + fibo(a - 2));
}
