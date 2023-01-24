//linear search
#include <stdio.h>
int main()
{
int arr[100];
int i, n, ss, pos, flag;
printf("ENTER THE NO OF ELEMENTS IN AN ARRAY :");
scanf("%d",&n);
printf("ENTER THE ELEMENTS INTO AN ARRAY:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("ENTER THE ELEMENT TO BE SEARCHED:");
scanf("%d",&ss);
for(i=0;i<n;i++)
{
if(arr[i]==ss)
{
pos=++i;
printf("THE NUMBER IS FOUND TO BE IN POSITION: %d",pos);
flag=-1;
break;
}
}
if(flag!=-1)
printf("\nTHE NUMBER %d is not found",ss);
return 0;
}