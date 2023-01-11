#include<stdio.h>
#include<stdlib.h>
struct node{
    int item;
    struct node *left;
    struct node *right;
};
//CREATE A NEW NODE
struct node *createnode(int value){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->item=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

//INSERT ON THE LEFT OF THE NODE
struct node *insertleft(struct node *root,int value)
{
    root->left=createnode(value);
    return root->left;
}

//INSERT ON THE RIGHT OF THE NODE
struct node *insertright(struct node *root,int value)
{
    root->right=createnode(value);
    return root->right;
}

//INORDER TRAVERSAL
int inordertraversal(struct node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    inordertraversal(root->left);
    printf("%d->",root->item);
    inordertraversal(root->right);
}

int main()
{
    struct node *root=createnode(1);
    insertleft(root,2);
    insertright(root,3);
    insertleft(root->left,4);
    insertright(root->left,6);
    printf("INORDER TRAVERSAL\n");
    inordertraversal(root);
}

