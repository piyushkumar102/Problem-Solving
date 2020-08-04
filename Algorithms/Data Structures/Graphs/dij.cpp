//Dijikstras Algorithm
#include <stdio.h>
#include <math.h>
#include <string.h>
#define IN 999
#define N 5
int dij(int cost[][N], int source, int target);
int main()
{
	int cost[N][N], i, j, w, ch, co;
	int source, target, x, y;
	printf("The Shortest Path");
	for (i = 1; i < N; i++)
	{
		for (j = 1; j < N; j++)
		{
			cost[i][j] = IN; //assign infinity to all vectors
		}
	}
	for (i = 1; i < N; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			printf("\nWeight %d,%d:", i, j);
			scanf("%d", &w);
			cost[i][j] = cost[j][i] = w;
		}
		printf("\n");
	}
	printf("Enter the Source:");
	scanf("%d", &source);
	printf("\nEnter the Target");
	scanf("%d", &target);
	co = dij(cost, source, target);
	printf("The Shortest path is :%d", co);
}
int dij(int cost[][N], int source, int target)
{
	int dist[N], prev[N], selected[N] = {0}, i, m, min, start, d, j;
	char path[N];
	for (i = 1; i < N; i++)
	{
		dist[i] = IN;
		prev[i] = -1;
	}
	start = source;
	selected[start] = 1;
	dist[start] = 0;
	while (selected[target] == 0)
	{
		min = IN;
		m = 0;
		for (i = 1; i < N; i++)
		{
			d = dist[start] + cost[start][i];
			if (d < dist[i] && selected[i] == 0)
			{
				dist[i] = d;
				prev[i] = start;
			}
			if (min > dist[i] && selected[i] == 0)
			{
				min = dist[i];
				m = i;
			}
		}
		start = m;
		selected[start] = 1;
	}
	start = target;
	j = 0;
	while (start != -1)
	{
		path[j++] = start + 65;
		start = prev[start];
	}
	path[j] = '\0';
	path = strrev(path);
	printf("%s", path);
	return dist[target];
}
