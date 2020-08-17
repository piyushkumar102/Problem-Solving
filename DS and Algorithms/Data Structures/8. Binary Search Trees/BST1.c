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
void postorder(struct tree *);
void preorder(struct tree *);

void search(struct tree *);
void min_max(struct tree *root);

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
    printf("Inorder:");
    inorder(root);
    printf("\nPreorder:");

    preorder(root);
    printf("\nPostorder:");

    postorder(root);
    search(root);
    min_max(root);
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

void postorder(struct tree *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->info);
    }
    return;
}
void preorder(struct tree *root)
{
    if (root != NULL)
    {
        printf("%d ", root->info);
        preorder(root->left);
        preorder(root->right);
    }
    return;
}
void search(struct tree *root)
{
    int no, i, ino;
    struct tree *ptr;
    ptr = root;
    scanf(" %d", &no);
    fflush(stdin);
    while (ptr)
    {
        if (no > ptr->info)
            ptr = ptr->right;
        else if (no < ptr->info)
            ptr = ptr->left;
        else
            break;
    }
    if (ptr)
    {
        printf("\nSearch successful");
    }
    else

        printf("\nSearch unsuccessful");
}
void min_max(struct tree *root)
{
    struct tree *temp = root;
    while (temp->left != NULL)
        temp = temp->left;
    printf("\nMin value:%d\n", temp->info);
    temp = root;
    while (temp->right != NULL)
        temp = temp->right;
    printf("Max value:%d\n", temp->info);
}
