#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n], i, j;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int min, temp;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
