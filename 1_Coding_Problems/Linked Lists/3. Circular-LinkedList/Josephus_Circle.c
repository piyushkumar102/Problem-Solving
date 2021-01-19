#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start = NULL;
void create(int);
void delete_m(int, int);
void display();
int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);
    for (i = 1; i < n + 1; i++)
    {
        create(i);
    }
    display();
    delete_m(m, n);
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
        struct node *temp;
        temp = start;
        while (temp->next != start)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = start;
    }
}
void delete_m(int m, int n)
{
    int count1 = n;
    while (count1 != 1)
    {
        int count = 1;
        struct node *temp, *prev;
        temp = start;
        while (1)
        {
            if (count == m)
                break;
            printf("(%d %d)->", temp->info, count);
            prev = temp;
            temp = temp->next;
            count++;
        }
        start = temp->next;
        prev->next = start;
        printf("Freed:%d\n", temp->info);
        free(temp);
        count1--;
    }
}
void display()
{
    int count = 0;
    struct node *disp;
    disp = start;
    printf("\nDisplay\n");
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