#include <stdio.h>
#include <stdlib.h>
void create(int);
void insert_tail(int);
void insert_beg(int);
void delete (int);
void delete_tail();
void display();
struct node
{
    struct node *left;
    int info;
    struct node *right;
};
struct node *start = NULL;
int main()
{
    int val, i, n, pos;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &val);
        create(val);
    }
    scanf("%d", &val);
    insert_beg(val);
    scanf("%d", &pos);
    if (pos == n)
    {
        delete_tail();
    }
    else if (pos > n)
    {
        display();
    }
    else
        delete(pos);
    display();
}
void create(int val)
{
    int n;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (start == NULL)
    {
        newnode->left = NULL;
        newnode->info = val;
        newnode->right = NULL;
        start = newnode;
    }
    else
    {
        insert_tail(val);
    }
}
void insert_beg(int val)
{
    printf("First %d", start->info);
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    start->left = newnode;
    newnode->left = NULL;
    newnode->info = val;
    newnode->right = start;
    start = newnode;
}
void insert_tail(int val)
{
    struct node *newnode;
    struct node *ptr;
    ptr = start;
    newnode = (struct node *)malloc(sizeof(struct node));
    while (ptr->right != NULL)
    {
        ptr = ptr->right;
    }
    ptr->right = newnode;
    newnode->left = ptr;
    newnode->info = val;
    newnode->right = NULL;
}
void delete (int val)
{
    int pos = val - 1;
    if (pos == 0)
    {
        struct node *ptr;
        ptr = start;
        start = start->right;
        start->left = NULL;
        free(ptr);
    }
    else
    {
        struct node *ptr;
        ptr = start;
        int i = -1;
        while (ptr->right != NULL)
        {
            i++;
            if (i == (pos))
            {
                break;
            }
            else
            {
                ptr = ptr->right;
            }
        }
        ptr->left->right = ptr->right;
        ptr->right->left = ptr->left;
        free(ptr);
    }
    display();
}
void delete_tail()
{
    struct node *ptr;
    ptr = start;
    while (ptr->right != NULL)
    {
        ptr = ptr->right;
    }
    ptr->left->right = NULL;
    free(ptr);
    display();
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
        disp = disp->right;
        count++;
    }
    if (disp == NULL)
    {
        printf("X");
    }
    printf("\nNumber of nodes: %d\n", count);
}