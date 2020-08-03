#include <stdio.h>
#include <stdlib.h>
void create(int);
void del(int);
void del_end();
void del_beg(int);
void insert_end(int);
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
        if (i == 0)
        {
            create(val);
        }
        else
        {
            insert_end(val);
        }
    }
    scanf("%d", &pos);
    if (pos == n)
    {
        del_end();
    }
    else if (pos > n)
    {
        display();
    }
    else
        del(pos);
}
void insert_end(int val)
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
void display()
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->right;
    }
    printf("\n");
}
void create(int val)
{
    int n;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (start == NULL)
    {
        newnode->info = val;
        newnode->right = NULL;
        newnode->left = NULL;
        start = newnode;
    }
    else
    {
        insert_end(val);
    }
}
void del(int val)
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
void del_end()
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
