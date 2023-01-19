#include <stdio.h>
int factorial(int n)
{
    int i,fact,j;
    for(j=1;j<=n;j++)
    {
    for(i=1;i<=i;i++)
    {
        fact=fact*i;
    }
    printf("%d Factorial is %d"i,fact);
    }
}
int main() 
{
    int n;
    printf("ENTER THE UPTO WHICH NUMBER FACTORIAL YOU WANT");
    scanf("%d",&n);
    factorial(n);
}