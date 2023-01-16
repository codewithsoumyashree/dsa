//at a given position
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start=NULL;
void create_list(int data)
{
    struct node *temp;
    struct node *q;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->info=data;
    temp->link=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        q=start;
        while(q->link!=NULL)
        {
            q=q->link;
        }
        q->link=temp;
    }
}
void display()
{
    struct node *q;
    if(start==NULL)
    {
        printf("NO LINK LIST IS BEING CREATED\n");
    }
    q=start;
    while(q!=NULL)
    {
        printf("%d\n",q->info);
        q=q->link;
    }
}
struct node* addatpos(struct node *start, int newdata1, int pos)
{
    struct node *p, *temp;
    temp=(struct node*)malloc(sizeof (struct node));
    temp->info=newdata1;
    if(pos==1)
    {
        temp->link=start;
        start=temp;
        return start;
    }
    p=start;
    for(int i=1;i<pos-1&&p!=NULL;i++)
    {
    p=p->link;
    }
    if(p==NULL)
    {
        printf("THERE IS LESS ELEMENET THAN INPUT");
    }
    else
    {
        temp->link=p->link;
        p->link=temp;
    }
    return start;
}
int main()
{
    int n;
    printf("ENTER THE TOTAL NUMBER OF NODES:");
    scanf("%d",&n);
    int i,data,newdata1,pos;
    for(i=0;i<n;i++)
    {
        printf("enter the data %d:",i+1);
        scanf("%d",&data);
        create_list(data);
    }
    printf("THE CREATED LINKED LIST IS :\n");
    display();
    printf("ENTER THE DATA YOU WANNA ADD:\n");
    scanf("%d",&newdata1);
    printf("ENTER THE POSITION YOU WANNA ENTER:\n");
    scanf("%d",&pos);
    start=addatpos(start,newdata1,pos);
    display();
}
