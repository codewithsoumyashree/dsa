/* to find the element whose sum is X in an sorted array */
#include <stdio.h>
int main()
{
    int a[10];
    int x;
    printf("ENTER THE NUMBERS TO AN ARRAY:\n");
    for(int i=0;i<10:i++)
    scanf("%d",&a[10]);
    printf("\nENTER THE VALUE OF X:");
    scanf("%d",&x);
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        if(a[i]+a[j]==x)
        printf("%d and %d sum is %d",i,j,x);
    }
    return 0;
}