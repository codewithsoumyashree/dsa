#include <stdio.h>
#include <stdlib.h>
  
struct node {
    int key;
    struct node *left, *right;
};
  
// to create a new BST node
struct node* newNode(int item)
{
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

//inorder traversal 
void inorder(struct node* root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

//to create branches of the node
struct node* insert(struct node* node, int key)
{
    //node empty create tree again
    if (node == NULL)
    return newNode(key);

    //tree have root node next branches create
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    return node;
}

//min traversal
int minValueNode(struct node* node)
{
    struct node* ptrR = node;
  
    /* loop down to find the leftmost leaf */
    while (ptrR && ptrR->left != NULL)
        ptrR = ptrR->left;

    return ptrR->key;
}

//max traversal
int maxValueNode(struct node* node)
{
    struct node* ptrR = node;
  
    /* loop down to find the rightmost leaf */
    while (ptrR && ptrR->right != NULL)
        ptrR = ptrR->right;

    return ptrR->key;
}

int main()
{
    /* Let us create following BST
		    50
		   / \
		30     70
	    / \    / \
        20 40 60 80 */
    //PRE ORDER : 50 30 20 40 70 60 80 
	struct node* root = NULL;
	root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);

	// print inoder traversal of the BST
	inorder(root);

    //print the min element of the BST
    int min=minValueNode(root);
    printf("\nTHE MIN OF THE BST=%d",min);

    int max=maxValueNode(root);
    printf("\nTHE MAX OF THE BST=%d",max);

	return 0;
}
  