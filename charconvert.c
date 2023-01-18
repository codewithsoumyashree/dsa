//to display after converting from lower case to upper and vice
#include <stdio.h>
int convertion(char ch)
{
    if(ch>=65&&ch<=90)
    return(ch+32);
    else if(ch>=97&&ch<=122)
    return(ch-32);
    else
    return(1);
}
int main()
{
    int a;
    char ch;
    printf("ENTER THE CHAR TO BE CONVERTED:");
    scanf("%c",&ch);
    a= int convertion(ch);
    printf("%c",a);
    return(0);
}