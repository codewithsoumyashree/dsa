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
int search(struct node* root, int keys) 
{ 
    // while is used to traverse till the end of tree
    while (root != NULL)
    {

        // checking condition and passing right subtree & recusing 
        if (keys > root->key) 
            root = root->right; 

        // checking condition and passing left subtree & recusing 
        else if (keys < root->key) 
            root = root->left; 
        else
            return 1; // if the value is found return 1 
    } 
    return 0; 
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
    int keys;
    printf("ENTER THE NUMBER TO BE SEARCHED:");
    scanf("%d",&keys);
    int found=search(root,keys);
    if(found)
    printf("THE DATA U SEARCHED EXISTS!!!!");
    else
    printf("\nDOESN'T EXIST!!!!!!");
}

