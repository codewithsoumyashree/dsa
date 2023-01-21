// sum of n elements using malloc
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,*ptr,sum=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("ENTER ELEMENTS OF ARRAY:");
    for(i=0;i<n;++i)
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("SUM=%d",sum);
    free(ptr);
    return 0;
}