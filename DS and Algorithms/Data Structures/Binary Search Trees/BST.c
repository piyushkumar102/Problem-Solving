#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root = NULL;
int count = 0;
struct node *insert(struct node *, int);
struct node *delete1(struct node *, int);
struct node *min(struct node *root);
void display(struct node *);

int main()
{
	int i, val;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &val);
		root = insert(root, val);
	}
	display(root);
	delete1(root, 6);
}
struct node *insert(struct node *root, int val)
{
	struct node *nn;
	nn = (struct node *)malloc(sizeof(struct node));
	nn->data = val;
	if (root == NULL)
	{
		nn->left = nn->right = NULL;
		root = nn;
		count++;
	}
	else
	{
		if (val < root->data)
		{
			root->left = insert(root->left, val);
		}
		else
		{
			root->right = insert(root->right, val);
		}
	}
	return root;
}
void display(struct node *root)
{
	if (root != NULL)
	{
		display(root->left);
		printf("%d ", root->data);
		display(root->right);
	}
}
struct node *delete1(struct node *root, int val)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (val > root->data)
	{
		root->right = delete1(root->right, val);
	}
	else if (val < root->data)
	{
		root->left = delete1(root->left, val);
	}
	else
	{
		if (root->left == NULL && root->right == NULL) //leaf node
		{
			free(root);
			return NULL;
		}
		else if (root->left == NULL || root->right == NULL) //one child
		{
			struct node *temp;
			if (root->left == NULL)
			{
				temp = root->right; //copy child and delete
			}
			else
				temp = root->left;
			free(root);
			return temp;
		}
		else
		{
			struct node *temp = min(root->right);
			root->data = temp->data;
			root->right = delete1(root->right, temp->data);
		}
	}
}
struct node *min(struct node *root) //Minimum in right side of root
{
	if (root == NULL)
		return NULL;
	else if (root->left != NULL)
	{
		return min(root->left);
	}
	return root;
}
