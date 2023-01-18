#include <stdio.h>
int square(int b,int p)
{
    int sum;
    if(b==1&&p==1)
    return(1);
    else
    {
    int i,sum=1;
    for(i=1;i<=p;i++)
    sum=sum*b;
    return(sum);
    }
}
int main()
{
    int base,power,result;
    printf("ENTER THE BASE:");
    scanf("%d",&base);
    printf("ENTER THE POWER:");
    scanf("%d",&power);
    result=square(base,power);
    printf("THE%d RAISE TO%d EQUALS TO%d",base,power,result);
}