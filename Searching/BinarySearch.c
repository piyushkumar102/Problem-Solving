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
	int l, u, mid;
	l = 0;	   //Lower bound
	u = n - 1; //Upper Bound
	int key;
	scanf("%d", &key);
	for (i = 0; i < n; i++)
	{
		mid = l + (u - 1) / 2;
		if (key == a[mid])
		{
			printf("Element Found at index: %d", mid);
			break;
		}
		else if (key > a[mid])
		{
			l = mid + 1; //Change lower Bound to element right to Mid
		}
		else
		{
			u = mid - 1; //Change the upper bound to the element left to mid
		}
	}
}

/*
Time Complexity: O(log n)
Best-Case: O(1)
*/