//Floyds Algorithm
#include <stdio.h>
int main()
{
	int nodes;
	scanf("%d", &nodes);
	int adj[nodes][nodes], i, j, k;
	for (i = 0; i < nodes; i++)
	{
		for (j = 0; j < nodes; j++)
		{
			scanf("%d", &adj[i][j]);
		}
	}
	for (k = 0; k < nodes; k++)
	{
		for (i = 0; i < nodes; i++)
		{
			for (j = 0; j < nodes; j++)
			{
				if (adj[i][k] + adj[k][j] < adj[i][j])
				{
					adj[i][j] = adj[i][k] + adj[k][j];
				}
			}
		}
	}
	for (i = 0; i < nodes; i++)
	{
		for (j = 0; j < nodes; j++)
		{
			printf("%d\t", adj[i][j]);
		}
		printf("\n");
	}
}
