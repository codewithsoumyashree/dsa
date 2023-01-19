#include <stdio.h>
int factorial(int n)
{
    if (n==1)
    return(1);
    else
    return(n*factorial(n-1));
}
int main()
{
    int a,fact;
    printf("\n ENTER ANY NUMBER");
    scanf("%d",&a);
    fact=factorial(a);
    printf("Factorial Value=%d",fact);
    return(0);
}