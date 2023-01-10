#include<stdio.h>
#include<malloc.h>


struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node* createNode(int data)
{
	struct node* temp;
	temp= (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
	
}
void inOrder(struct node *root)
{ 
  if(root != NULL){
  	inOrder(root->left);
  	printf("%d ",root->data);
  	inOrder(root->right);
  }
}
struct node *inOrderPredecessor(struct node *root){
	root = root->left;
	while(root->right != NULL){
		root = root->right;
	}
	return root;
}
struct node *deleteNode(struct node *root,int value){
	struct node *iPre;
	if(root == NULL)
	   return NULL;
	if(root->left == NULL && root->right == NULL){
		free(root);
		return NULL;
	}
	//seach the node to be deleted
	if(value < root->data){
		root->left = deleteNode(root->left,value);
	} 
	else if(value > root->data){
		root->right = deleteNode(root->right,value);
	}
	//deletion strategy when the node is found
	else{
		iPre = inOrderPredecessor(root);
		root->data = iPre->data;
		root->left = deleteNode(root->left,iPre->data);
	}
	 return root;        
}


int main()
{
	struct node *p = createNode(5);
	struct node *p1 = createNode(2);
	struct node *p2 = createNode(8);
	struct node *p3 = createNode(1);
	struct node *p4 = createNode(3);
	/*
	    5
	   / \
 	  2   8
	/  \
   1    3
   */
	//linking of tree
	p->left = p1;
	p->right = p2;
	p1->left = p3;
	p1->right = p4;
	
	inOrder(p);
	deleteNode(p,5);
	printf("\n");
	inOrder(p);
	
	return 0;
}