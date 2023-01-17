#include<stdio.h>
int arr[5];
int f=-1;
int r=-1;
int enqueue(int x,int r);
void dequeue();
int main()
{
    int x;
    for(int i=0;i<5;i++)
    {
        printf("ENTER THE %d TH NUMBER ",i+1);
        scanf("%d",&x);
        r=enqueue(x,r);
        f=0;
    }
    dequeue();
}
int enqueue(int x,int r)
{
    if(r==1)
    {
        printf("OVERFLOW CONDITION!");
    }
    arr[r]=x;
    r++;
    return r;
}
void dequeue()
{
    while(f!=5)
    {
        int y=arr[f];
        f=f+1;
        printf("%d IS DELETED !\n",y);
    }
    printf("THE ENTIRE QUEUE IS EMPTY !\n");
}