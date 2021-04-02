#include <stdio.h>
int main()
{
	int n, i;
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int key;
	scanf("%d", &key);
	for (i = 0; i < n; i++)
	{
		if (key == a[i])
		{
			printf("Element Found at index: %d\n", i);
			break;
		}
	}
}

/*
Time Complexity: O(n)
Best-case: O(1)
Average performance: O(n/2)
*/
