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
void inorder(struct node *);
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
    inorder(root);
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
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d", root->info);
        inorder(root->right);
    }
}