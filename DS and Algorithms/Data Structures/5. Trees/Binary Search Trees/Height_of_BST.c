#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *left;
    int info;
    struct node *right;
};
struct node *root = NULL;
struct node *create(int);
struct node *insert(struct node *, int);
int max_height(struct node *);
int main()
{
    int i, val, n;
    struct node *root = NULL;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &val);
        root = insert(root, val);
    }
    int height = max_height(root);
    printf("%d", height);
}
struct node *create(int val)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->left = NULL;
    temp->info = val;
    temp->right = NULL;
    return temp;
}
struct node *insert(struct node *node, int val)
{
    if (node == NULL)
        return create(val);
    if (val < (node->info))
        node->left = insert(node->left, val);
    else
    {
        node->right = insert(node->right, val);
    }
    return node;
}
int max_height(struct node *node)
{
    if (node == NULL)
        return 0;
    else
    {
        int left_height = max_height(node->left);
        int right_height = max_height(node->right);
        if (left_height > right_height)
            return (left_height + 1);
        else
            return (right_height + 1);
    }
}