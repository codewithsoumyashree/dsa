#include <stdio.h>
int perfectnumber(int n);
int main()
{
    int n,s;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    perfectnumber(n);
    return 0;
}
int perfectnumber(int n)
{
    int rem, sum=0, i;
    for(i=1;i<n;i++)
    {
        rem=n%i;
        if(rem==0)
        sum=sum+i;
    }
    if(sum==n)
    printf("THE NUMBER IS PERFECT");
    else
    printf("THE NUMBER IS NOT PERFECT"); 
}