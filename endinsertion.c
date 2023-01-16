//add at end
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start;
void create_list(int data);
void display();
void add_end(struct node*start,int newdata);
int main()
{
    int n;
    printf("ENTER THE TOTAL NUMBER OF NODES:");
    scanf("%d",&n);
    int i,data,newdata;
    for(i=0;i<n;i++)
    {
        printf("enter the data %d:",i+1);
        scanf("%d",&data);
        create_list(data);
    }
    printf("THE CREATED LINKED LIST IS :\n");
    display();
    printf("ENTER THE VALUE YOU WANT TO ADD AT end");
    scanf("%d",&newdata);
    add_end(start,newdata);
    printf("%d",newdata);
    printf("\ncheck\n");
    display();
}
void create_list(int data)
{
    struct node *temp, *q;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->info=data;
    temp->link=NULL;
    if(start==NULL)
    start=temp;
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
        printf("NO LINK LIST IS CREATED!");
    }
    q=start;
    while(q!=NULL)
    {
        printf("%d\n",q->info);
        q=q->link;
    }
}
void add_end(struct node*start,int newdata)
{
    struct node *temp;
    struct node *p=start;
    temp=(struct node*)malloc(sizeof (struct node));
    temp->info=newdata;
    temp->link=NULL;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=temp;
}