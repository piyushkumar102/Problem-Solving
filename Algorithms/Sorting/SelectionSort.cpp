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
	for (i = 0; i < n; i++)
	{
		min = a[i];
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < min)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				min = a[j];
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
