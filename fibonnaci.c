#include <stdio.h>
int fibonacci(int n)
{
    return(n==1||n==2?1:fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
    int n,t;
    printf("enter the no of time execution");
    scanf("%d",&n);
    t=fibonacci(n);
    printf("THE NO IS%d",t);
}