#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start = NULL;
void create(int);
void search();
void display();
int main()
{
    int n;
    scanf("%d", &n);
    int i, val;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &val);
        create(val);
    }
    int key;
    scanf("%d", &key);
    search(key);
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
    else
    {
        struct node *new_node, *temp;
        new_node = (struct node *)malloc(sizeof(struct node));
        temp = start;
        new_node->info = val;
        new_node->next = NULL;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void search(int key)
{
    struct node *temp;
    temp = start;
    while(temp->next!=NULL)
    {
        if(temp->info==key)
        {
            printf("Found");
            break;
        }      
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