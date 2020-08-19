#include <stdio.h>
#include <stdlib.h>
void create();
void display();
void reverse();
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
    reverse();
    printf("Reversed List\n");
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
void reverse()
{
    struct node *current = start;
    struct node *prev = NULL;
    struct node *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    start = prev;
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
        printf("X\n");
    }
    printf("\nNumber of nodes: %d\n", count);
}