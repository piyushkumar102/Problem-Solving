//Pointer basics
#include <stdio.h>
int main()
{
	int n = 10;
	printf("\nAddress of N : %p", &n);
	int *x;
	x = &n;
	printf("\nX : %p", x);
	*x = *x;
	printf("\nValue of Address stored in X: %d", *x);
	int z[10] = {1, 2, 3};
	x = &z[0];
	printf("\nAddress of Array Z(0): %p", *(x + 1));
}
