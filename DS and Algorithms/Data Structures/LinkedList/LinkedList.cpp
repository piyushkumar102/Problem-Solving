//Linked List
#include <stdio.h>
#include <stdlib.h>
int count;
void create();
void insertbeg();
void insertend();
void insertmid();
void deletebeg();
void deletend();
void deletemid();
void display();
struct node
{
	int info;
	struct node *next;
};
struct node *start = NULL;
int main()
{
	create();
	insertbeg();
	insertend();
	insertmid();
	insertmid();
	insertend();
	deletebeg();
	deletend();
	deletemid();
}
void display()
{
	struct node *disp;
	disp = start;
	printf("\n");
	while (disp != NULL)
	{
		printf("%d->", disp->info);
		disp = disp->next;
	}
	printf("\nNumber of nodes: %d\n", count);
}
void create()
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("Node 1:");
	scanf("%d", &temp->info);
	temp->next = NULL;
	if (start == NULL)
	{
		start = temp;
	}
	count++;
	display();
}
void insertbeg()
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("\nInsert @start:");
	scanf("%d", &temp->info);
	temp->next = start;
	start = temp;
	count++;
	display();
}
void insertend()
{
	struct node *temp, *ptr;
	temp = (struct node *)malloc(sizeof(struct node));
	ptr = start;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	printf("\nInsert @end:");
	scanf("%d", &temp->info);
	temp->next = NULL;
	count++;
	display();
}
void insertmid()
{
	int pos, i = 0;
	printf("\nInsert @pos:");
	scanf("%d", &pos);
	if (pos > count)
	{
		exit(1);
	}
	struct node *temp, *ptr, *pptr;
	temp = (struct node *)malloc(sizeof(struct node));
	scanf("%d", &temp->info);
	pptr = ptr = start;
	while (i < pos - 1)
	{
		pptr = pptr->next;
		i++;
	}
	ptr = pptr->next;
	pptr->next = temp;
	temp->next = ptr;
	count++;
	display();
}
void deletebeg()
{
	struct node *ptr;
	ptr = start;
	start = start->next;
	printf("\nDeleted at the Beg: %d", ptr->info);
	free(ptr);
	count--;
	display();
}
void deletend()
{
	struct node *ptr, *temp;
	ptr = start;
	while (ptr->next != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
	}
	temp->next = NULL;
	printf("\nDeleted at the End: %d", ptr->info);
	free(ptr);
	count--;
	display();
}
void deletemid()
{
	int pos, i = 0;
	printf("\nDelete @pos:");
	scanf("%d", &pos);
	if (pos == 1)
	{
		deletebeg();
	}
	else if (pos > count)
	{
		exit(1);
	}
	struct node *ptr, *nptr;
	nptr = ptr = start;
	while (i < pos - 1)
	{
		nptr = ptr;
		ptr = ptr->next;
		i++;
	}
	nptr->next = ptr->next;
	free(ptr);
	count--;
	display();
}
