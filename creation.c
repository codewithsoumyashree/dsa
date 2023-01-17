//creation of link list
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int info;
    struct Node *link;
};
struct Node *start=NULL;
void create_list(int data)
{
    struct Node *temp;
    struct Node *q;
    temp=(struct Node*)malloc(sizeof(struct Node));
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
    struct Node *q;
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
void circular(struct Node *start)
{
    struct Node *trav;
    trav=start;
    while(trav->link!=NULL)
    {
        trav=trav->link;
    }
    trav->link=start;
}
int main()
{
    int n,data;
    printf("ENTER THE NUMBER OF NODES:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the NODE info");
        scanf("%d",&data);
        create_list(data);
    }
    display();
    printf("temp->link="
    circular(start);
    printf("start is now",start);
    return 0;
}
