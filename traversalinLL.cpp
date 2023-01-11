#include <stdio.h>
#include <stdlib.h>
struct NODE
{
    int info;
    struct NODE *link ;
};
struct NODE *start=NULL;
void  create_list(int data);
void traversal(struct NODE*start);
int main()
{
    int n,data;
    printf("ENTER THE NUMBER IF NODES:");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("ENTER THE DATA OF THE %d NODE:",i+1);
        scanf("%d",&data);
        create_list(data);
    }
    traversal(start);
    return 0;
}

void create_list(int datan)
{
    int data=datan;
    struct NODE *temp, *q;
    temp=(struct NODE*)malloc(sizeof(struct NODE));
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
void traversal(struct NODE*start)
{
    struct NODE*q;
    q=start;
    while(q!=NULL)
    {
        printf("%d\n",q->info);
        q=q->link;
    }
}