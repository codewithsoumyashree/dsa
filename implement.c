#include<stdio.h>
#include<stdlib.h>
struct *createnode(int value);
struct *insertleft(struct node *root,int value);
struct *insertright(struct node *root,int value);
void inordertraversal(struct node *root);
struct node{
    int item;
    struct node *left;
    struct node *right;
};

int main(){
    struct node *root=createnode(1);
    insertleft(root,2);
    insertright(root,3);
    insertleft(root->left,4);
    insertright(root->left,6);
    printf("INORDER TRAVERSAL\n");
    inordertraversal(root);
}

//CREATE A NEW NODE
struct *createnode(int value){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->item=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

//INSERT ON THE LEFT OF THE NODE
struct *insertleft(struct node *root,int value){
    root->left=createnode(value);
    return root->left;
}

//INSERT ON THE RIGHT OF THE NODE
struct *insertright(struct node *root,int value){
    root->right=createnode(value);
    return root->right;
}

//INORDER TRAVERSAL
void inordertraversal(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    inordertraversal(root->left);
    printf("%d->",root->item);
    inordertraversal(root->right);
}