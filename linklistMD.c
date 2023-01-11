#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int info;
    struct Node *link; 
};
struct Node *start;
void create_list(int data)
{
   struct Node *temp, *q;
   temp= (struct Node*)malloc(sizeof(struct Node));	
   temp -> info = data;
   temp -> link = NULL;
   if(start == NULL)
   {
   	 start = temp;
	}
	else
	{
		q= start;
		while(q -> link != NULL)
		{
			q = q->link;
		}
		q -> link = temp;
	}	
	
}
void display(struct Node*start)
{
	struct Node *q=start;
	
	if(start == NULL)
	{
		printf("list is empty");
	    return;
	}
	else
	{
	q=start;
	while(q != NULL)
	{
		printf(" %d ",q->info);
		q= q->link;
	}	
	}
	
}

struct Node* add_beg(struct Node* start, int dib)
{
	struct Node *temp,*q;
    
	temp= (struct Node*)malloc(sizeof(struct Node));
	temp->info=dib;
	temp->link= start;
	start = temp;
	return start;
}
struct Node*add_end(struct Node*start,int die)
{
	struct Node*temp ,*p;
	p=start;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->info =die;
	temp->link = NULL;
	while(p->link != NULL)
	{
		p=p->link;
	}
	p->link =temp;
	return start;
}
struct Node*add_pos(struct Node*start,int pos,int dip)
{
	struct Node *temp,*p;
	int i;
	temp= (struct Node*)malloc(sizeof(struct Node));
	temp->info= dip;
	if(pos == 1)
	{
		temp->link=start;
		start = temp;
		return start;
	}
	p=start;
	for(i=1;i<pos-1 && p!= NULL;i++)
	{
		p= p->link;
	}
	if(p == NULL)
	{
		printf("\nthere are less elements presents than the given position\n");
	}
	else
	{
		temp->link= p->link;
		p->link= temp;
	}
	return(start);
}
struct Node* deletion(struct Node* start,int dd)
{
	struct Node *p;
	if(start == NULL)
	{
		printf("List is empty");
		return start;
	}
	if(start->info == dd)
	{
		temp= start;
		start = start ->link;
		free(temp);
		return start;
	}
	p= start;
	while(p->link != NULL)
	{
		if(p->link->info == dd)
		{
			temp = p->link;
			p->link = temp->link;
			free(temp);
			return start;
		}
		p= p->link;
	}
	printf("\nelement not found in the list\n");
	return start;
}
int main()
{
	int n,i,data,c;
	
    start = NULL;
	printf("enter the number of nodes");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   printf("enter the data");
	   scanf("%d",&data);
	   create_list(data);
	}
	 display(start);
	
	 printf("\nPress 1 to insert data at the beggning\n");
	 printf("Press 2 to insert data at the end\n");
	 printf("Press 3 to insert data at the any positon\n");
	 printf("Press 4 to delete data\n ");
	 
	 printf("\nenter the choice: ");
	 scanf("%d",&c);
	 
	 switch(c)
	 {
	 	case 1:
	 		{
	 		  int dib;
	 		  printf("\nenter the data to be inserted at the beginning: ");
	          scanf("%d",&dib);	
	          start = add_beg(start,dib);
	          display(start);
	          break;
			 }
		case 2:
		{
			int die;
			 printf("\nenter the data to be inserted at the end: ");
	         scanf("%d",&die);
	         start=add_end(start,die);
	         display(start);
	         break;
		}
		case 3:
		{
			int dip,pos;
			 printf("\nenter the data to be inserted at the postion: ");
	         scanf("%d",&dip);
	         printf("\nenter the posiition: ");
	         scanf("%d",&pos);
	         start=add_pos(start,pos,dip);
	         display(start);
	         break;
		}
		case 4:
		{
			int dd;
			printf("\nenter the data to be deleted: ");
			scanf("%d",&dd);
			start=deletion(start,dd);
			display(start);	
			break;
		}
		default:
			printf("wrong input");
			 
	 }
	 return 0;
	 
}