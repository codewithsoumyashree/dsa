#include<stdio.h>
#include<stdlib.h>
typedef struct node_queue
{
    int info;
    int p;
    struct node_queue *link;
}node;
node* start=NULL;
node* front;
node* insert(node* start,int info,int p)
{
    node* temp;
    temp=(node*)malloc(sizeof(node));
    temp->info=info;
    temp->p=p;
    if(start==NULL || start->p>p)
    {
        temp->link=start;
        start=temp;
    }
    else
    {
        node* q;
        q=start;
        while(q->link!=NULL && q->link->p<=p)
        {
            q=q->link;
        }
        temp->link=q->link;
        q->link=temp;
    }
    return start;
}
void pop()
{
    node * temp;
    if(front==NULL)
    printf("Queue is Empty\n");
    else if(front->link==NULL)
    {
        temp=front;
        front==NULL;
        free(temp);
    }
    else
    {
        temp=front;
        front=front->link;
        free(temp);
    }
}
void display(node* start)
{
    node* q;
    q=start;
    if(start==NULL)
    printf("list is empty");
    while(q!=NULL)
    {
        printf("%d ",q->info);
        q=q->link;
    }
}
int main()
{
    int ch=0;
    printf("\nEnter:-\n1.Insert\n2.Delete\n3.Display\n4.Stop\n");
    while(ch!=4)
    {
        printf("Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter data item and priority\n");
            int n,pr;
            scanf("%d%d",&n,&pr);
            front=insert(front,n,pr);
            break;

            case 2:
            pop();
            break;

            case 3:
            display(front);
            break;
            
            case 4:
            break;
            default:
            printf("WRONG CHOICE!");
        }
    }
    return 0;
}
