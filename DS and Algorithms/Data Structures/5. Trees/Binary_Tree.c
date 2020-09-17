#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *left;
    int info;
    struct node *right;
};
struct node *create(int);
struct node *insert();
void inorder(struct node *);
int main()
{
    int i, val, n;
    struct node *root = insert();
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
struct node *insert()
{
    int val;
    scanf("%d", &val);
    if (val == -1)
    {
        return NULL;
    }
    struct node *root = create(val);
    root->left = insert();
    root->right = insert();
    return root;
}
void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->info);
    inorder(root->right);
}