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
//HEIGHT
int tree_height(struct node* root)
{
    // Get the height of the tree
    if (!root)
        return 0;
    else {
        // Find the height of both subtrees
        // and use the larger one
        int left_height = tree_height(root->left);
        int right_height = tree_height(root->right);
        if (left_height >= right_height)
            return left_height + 1;
        else
            return right_height + 1;
    }
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
    // Find the height of the tree
    int height = tree_height(root);
    printf("Height of the Binary Tree: %d\n", height);
}