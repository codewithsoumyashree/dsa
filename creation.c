#include <stdio.h>
#include <stdlib.h>
struct dnode
{
    struct dnode *prev;
    int info;
    struct dnode *next;
};
void addtoendlist(struct dnode *start,int data);
void addtoemptylist(struct dnode *start, int data);
void create_list(struct dnode *start)
{
    int i,n,data;
    printf("nodes?");
    scanf("%d",&n);
    printf("enter 1st data ");
    scanf("%d",&data);
    addtoemptylist(start,data);
    for(i=2;i<=n;i++)
    {
        printf("enter %d data:",i);
        scanf("%d",&data);
        addtoendlist(start,data);
    }
}
void addtoemptylist(struct dnode *start, int data)
{
    struct dnode *temp, *p;
    temp=(struct dnode*)malloc(sizeof(struct dnode));
    temp->info=data;
    temp->prev=NULL;
    temp->next=NULL;
}

void addtoendlist(struct dnode *start,int data)
{
    struct dnode *temp, *pqr;
    temp=(struct dnode*)malloc(sizeof(struct dnode));
    temp->info=data;
    pqr=start;
    while(pqr->next!=NULL)
    {
        pqr=pqr->next;
    }
    pqr->next=temp;
    temp->prev=pqr;
    temp->next=NULL;
}

int main()
{
    struct dnode *start=NULL;
    create_list(start);
}