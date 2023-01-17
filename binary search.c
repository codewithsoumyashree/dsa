//binary search 
#include <stdio.h>
int main()
{
    int arr[100];
    int n,i,ss,low,high,mid,flag;
    printf("ENTER THE NO OF ELEMENT IN AN ARRAY:");
    scanf("%d",&n);
    printf("\nENTER THE ELEMENT INTO AN ARRAY:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\nENTER THE ELEMENTS TO BE SEARCHED:");
    scanf("%d",&ss);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==ss)
        {
            printf("THE NO.IS FOUND TO BE IN:%d position ",++mid);
            flag=-1;
            break;
        }
        if(arr[mid]<ss)
        low= mid+1;
        else
        high= mid-1;
    }
    if(flag!=-1)
    printf("THE NUMBER %d IS NOT FOUND !",ss);
}