//Display the nth Node in a Linked List
#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int n;
    struct node *next;
} * h, *temp, *temp1, *temp2, *temp4;
int n;
void create();
void insert2();
void search();
int count = 0;
int main()
{
    h = NULL;
    temp = temp1 = NULL;
    scanf("%d", &n);
    if (n > 0 && n < 101)
    {
        create();
        for (int i = 0; i < n - 1; i++)
        {
            insert2();
        }
        search();
    }
    else
        exit(0);
}
void create()
{
    int data;
    temp = (struct node *)malloc(1 * sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    scanf("%d", &data);
    temp->n = data;
    count++;
}
void insert2()
{
    if (h == NULL)

    {
        create();
        h = temp;
        temp1 = h;
    }
    else
    {
        create();
        temp1->next = temp;
        temp->prev = temp1;
        temp1 = temp;
    }
}
void search()
{
    int i;
    int n1, count = 0;
    temp2 = h;
    if (temp2 == NULL)
    {
        exit(0);
        return;
    }
    scanf("%d", &n1);

    if (n1 > n)
    {
        exit(0);
    }

    else
    {
        for (i = 1; i < n1; i++)
        {
            temp2 = temp2->next;
        }
        printf("%d", temp2->n);
    }
}