#include <stdio.h>
#include <stdlib.h>

struct node {
	int key;
	struct node *left, *right;
};

//to create a new BST node
struct node* newNode(int item)
{
	struct node* temp= (struct node*)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

// to do inorder traversal of BST
void inorder(struct node* root)
{
	if (root != NULL) 
    {
		inorder(root->left);
		printf("%d \n", root->key);
		inorder(root->right);
	}
}

//to do preorder traversal of BST
void preorder(struct node* root)
{
    if (root != NULL) 
    {
		printf("%d \n", root->key);
		preorder(root->left);
		preorder(root->right);
	}
}

//to do postorder traversal of the BST
void postorder(struct node* root)
{
    if (root != NULL) 
    {
		postorder(root->left);
		postorder(root->right);
        printf("%d \n", root->key);
	}
}
struct node* insert(struct node* node, int key)
{
	//If the tree is empty, return a new node
	if (node == NULL)
		return newNode(key);

	// Otherwise, return down the tree
	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);
	else
	return node;
}

// Driver Code
int main()
{
	/* Let us create following BST
		    50
		   / \
		30       70
		/ \       / \
	    20 40     60 80 */
	struct node* root = NULL;
	root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);

	// print inorder traversal of the BST
    printf("inorder traversal of the BST:\n");
	inorder(root);

    //print preorder traversal of the BST
    printf("preoder traversal of the BST:\n");
    preorder(root);

    //print postorder traversal of the BST
    printf("postorder traversal of the BST:\n");
    postorder(root);

	return 0;
}
