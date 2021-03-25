#include <stdio.h>
#include <stdlib.h>
struct node
{
	int info;
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
	int i, val, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &val);
		root = insert(root, val);
	}
	display(root);
	delete1(root, 6);
}
struct node *insert(struct node *root, int val)
{
	struct node *new_node;
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->info = val;
	if (root == NULL)
	{
		new_node->left = new_node->right = NULL;
		root = new_node;
		count++;
	}
	else
	{
		if (val < root->info)
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
		printf("%d ", root->info);
		display(root->right);
	}
}
struct node *delete1(struct node *root, int val)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (val > root->info)
	{
		root->right = delete1(root->right, val);
	}
	else if (val < root->info)
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
			root->info = temp->info;
			root->right = delete1(root->right, temp->info);
		}
	}
}
struct node *min(struct node *root) //Minimum in left side of root
{
	if (root == NULL)
		return NULL;
	else if (root->left != NULL)
	{
		return min(root->left);
	}
	return root;
}
