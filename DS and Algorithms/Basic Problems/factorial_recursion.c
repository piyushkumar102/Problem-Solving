//Factorial through Recursion
#include <stdio.h>
int fact(int);
int main()
{
	int n, x, b;
	printf("Enter a number to find Factorial:");
	scanf("%d", &n);
	x = fact(n);
	printf("%d", x);
	return 0;
}
int fact(int a)
{
	if (a <= 1)
		return 1;
	else
		return a * fact(a - 1);
}
