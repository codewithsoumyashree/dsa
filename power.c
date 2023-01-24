//to display the power of the number 
#include <stdio.h>
int power_num(int base,int power)
{
    int i,sum=1;
    for(i=1;i<=power;i++)
    {
        sum=sum*base;
    }
    return(sum);
}
int main()
{
    int base,power,result;
    printf("ENTER THE BASE:");
    scanf("%d",&base);
    printf("ENTER THE POWER:");
    scanf("%d",&power);
    result=power_num(base,power);
    printf("THE%d RAISE TO%d EQUALS TO%d",base,power,result);
    return(0);
}