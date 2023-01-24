//to display positive negative even odd
#include <stdio.h>
int main()
{
    int i, j;
    int a[20];
    printf("enter the elements\n");
    for (i = 0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<20;i++)
    {
        if(a[i]>0)
        {
        printf("THE NUMBER WHICH IS POSITIVE IS %d\n",a[i]);
        if(a[i]%2==0)
        printf("THE NUMBER IS POSITIVE EVEN\n");
        else 
        printf("THE NUMBER IS POSITIVE ODD\n");
        }
        else 
        printf("THE NUMBER WHICH IS NEGATIVE%d\n",a[i]);
    }
}