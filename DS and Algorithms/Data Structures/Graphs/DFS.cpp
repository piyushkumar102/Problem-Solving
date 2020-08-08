//Depth First search in a Graph
#include <stdio.h>
#include <stdlib.h>
void dfs(int);
int adj[10][10], visited[10], nodes;
int main()
{
	int sp, i, j;
	scanf("%d", &nodes);
	for (i = 0; i < nodes; i++)
	{
		for (j = 0; j < nodes; j++)
		{
			scanf("%d", &adj[i][j]);
			if (adj[i][j] != 0 || adj[i][j] != 1)
				exit(1);
		}
		visited[i] = 0;
	}
	printf("Enter the Starting point :");
	scanf("%d", &sp);
	dfs(sp);
}
void dfs(int sp)
{
	int j;
	printf("%d->", sp);
	visited[sp] = 1;
	for (j = 0; j < nodes; j++)
	{
		if (!visited[j] && adj[sp][j] == 1)
		{
			dfs(j);
		}
	}
}
