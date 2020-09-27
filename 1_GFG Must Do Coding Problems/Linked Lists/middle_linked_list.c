#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start = NULL;
int count = 0;
void create(int);
void mid();
int main()
{
    int n, i, val;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &val);
        create(val);
    }
    mid();
}
void create(int val)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = val;
    if (start == NULL)
    {
        new_node->next = NULL;
        start = new_node;
        count++;
    }
    else if(start!=NULL)
    {
        struct node *temp;
        temp = start;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = NULL;
        count++;
    }
}
void mid()
{
    struct node *temp = start;
    int i=0;
    while (i<(count/2))
    {
        temp = temp->next;
        i++;
    }
    printf("%d", temp->info);
}