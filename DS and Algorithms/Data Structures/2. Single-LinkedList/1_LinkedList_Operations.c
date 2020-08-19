#include <stdio.h>
#include <stdlib.h>
void create(int);
void insert_beg(int);
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
	scanf("%d", &val);
	insert_beg(val);
	delete_tail();
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
		struct node *new_node, *temp;
		temp = start;
		new_node = (struct node *)malloc(sizeof(struct node));
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->info = val;
		new_node->next = NULL;
	}
}
void insert_beg(int val)
{
	struct node *new_node;
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->info = val;
	new_node->next = start;
	start = new_node;
	printf("%d Inserted @ 0th Index\n", new_node->info);
}
void delete_tail()
{
	struct node *temp, *prev_temp;
	temp = start;
	while (temp->next != NULL)
	{
		prev_temp = temp;
		temp = temp->next;
	}
	printf("%d Deleted", temp->info);
	free(temp);
	prev_temp->next = NULL;
}
void display()
{
	int count = 0;
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