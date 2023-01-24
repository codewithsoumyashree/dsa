/* to find the element whose sum is X in an sorted array */
#include <stdio.h>
int main()
{
    int a[10];
    int x,d;
    printf("ENTER 10 NUMBERS TO AN ARRAY:\n");
    for(int i=0;i<10;i++)
    scanf("%d",&a[10]);
    printf("\nENTER THE VALUE OF X:");
    scanf("%d",&x);
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<=10;j++)
        {
            d=a[i]+a[j];
            if(d==x)
            printf("%d and %d sum is %d",&i,&j,&x);
        }
    }
    return 0;
}
