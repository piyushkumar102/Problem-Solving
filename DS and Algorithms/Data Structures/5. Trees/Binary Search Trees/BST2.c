#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int info;
    struct tree *left;
    struct tree *right;
};
struct tree *insert(struct tree *, int);
void inorder(struct tree *);
struct tree *delet(struct tree *, int);
int main(void)
{
    struct tree *root;
    int choice, item, item_no, i;
    root = NULL;
    int n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &item);
        root = insert(root, item);
    }
    scanf("%d", &item_no);
    root = delet(root, item_no);
    inorder(root);
}
struct tree *insert(struct tree *root, int x)
{
    if (!root)
    {
        root = (struct tree *)malloc(sizeof(struct tree));
        root->info = x;
        root->left = NULL;
        root->right = NULL;
        return (root);
    }
    if (root->info > x)
        root->left = insert(root->left, x);
    else
    {
        if (root->info < x)
            root->right = insert(root->right, x);
    }
    return (root);
}
void inorder(struct tree *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->info);
        inorder(root->right);
    }
    return;
}
struct tree *delet(struct tree *ptr, int x)
{
    struct tree *p1, *p2;
    if (!ptr)
    {
        printf("\n Node not found ");
        return (ptr);
    }
    else
    {
        if (ptr->info < x)
        {
            ptr->right = delet(ptr->right, x);
        }
        else if (ptr->info > x)
        {
            ptr->left = delet(ptr->left, x);
            return ptr;
        }
        else
        {
            if (ptr->info == x)
            {
                if (ptr->left == ptr->right)
                {
                    free(ptr);
                    return (NULL);
                }
                else if (ptr->left == NULL)
                {
                    p1 = ptr->right;
                    free(ptr);
                    return p1;
                }
                else if (ptr->right == NULL)
                {
                    p1 = ptr->left;
                    free(ptr);
                    return p1;
                }
                else
                {
                    p1 = ptr->right;
                    p2 = ptr->right;
                    while (p1->left != NULL)
                        p1 = p1->left;
                    p1->left = ptr->left;
                    free(ptr);
                    return p2;
                }
            }
        }
    }
    return (ptr);
}
