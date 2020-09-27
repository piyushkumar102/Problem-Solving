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
void rotate(int);
int main()
{
    int n, k, i, val;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &val);
        create(val);
    }
    rotate(k);
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
    else if (start != NULL)
    {
        struct node *temp;
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = NULL;
        count++;
    }
}
void rotate(int k)
{
    struct node *temp, *kth_node;
    temp = start;
    kth_node = start;
    int i = 0;
    while (i < k)
    {
        kth_node = kth_node->next;
        i++;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = start;
    struct node *traverse = kth_node;
    while (traverse->next != kth_node)
    {
        printf("%d ", traverse->info);
        traverse = traverse->next;
    }
    printf("%d ", traverse->info);
}