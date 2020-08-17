#include <stdio.h>
#include <stdlib.h>
void create(int);
void display();
struct node
{
	int info;
	struct node *next;
};
struct node *start = NULL;
int main()
{
	int n, i, val;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &val);
		create(val);
	}
	display();
}
void create(int val)
{
	if (start == NULL)
	{
		struct node *new_node;
		new_node = (struct node *)malloc(sizeof(struct node));
		new_node->info = val;
		new_node->next = NULL;
		start = new_node;
	}
	else if (start != NULL)
	{
		struct node *new_node, *ptr;
		ptr = start;
		new_node = (struct node *)malloc(sizeof(struct node));
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
		new_node->info = val;
		new_node->next = NULL;
	}
}
void display()
{
	int count;
	struct node *disp;
	disp = start;
	printf("\n");
	while (disp != NULL)
	{
		printf("%d->", disp->info);
		disp = disp->next;
		count++;
	}
	if (disp == NULL)
	{
		printf("X");
	}
	printf("\nNumber of nodes: %d\n", count);
}