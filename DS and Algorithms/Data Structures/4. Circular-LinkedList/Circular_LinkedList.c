#include <stdio.h>
#include <stdlib.h>
void create(int);
void display();
void delete_tail();
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
	delete_tail();
	display();
}
void create(int val)
{
	struct node *new_node;
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->info = val;
	if (start == NULL)
	{
		start = new_node;
		new_node->next = start;
	}
	else
	{
		struct node *ptr;
		ptr = start;
		while (ptr->next != start)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
		new_node->next = start;
	}
}
void delete_tail()
{
	struct node *temp, *prev;
	temp = start;
	while (temp->next != start)
	{
		prev = temp;
		temp = temp->next;
	}
	free(temp);
	prev->next = start;
}
void display()
{
	int count;
	struct node *disp;
	disp = start;
	printf("Display\n");
	while (disp->next != start)
	{
		printf("%d->", disp->info);
		disp = disp->next;
		count++;
	}
	printf("%d->", disp->info);
	count++;
	printf("\nNumber of nodes: %d\n", count);
}