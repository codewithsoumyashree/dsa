//to satisfy the palindrome property of the string
#include <stdio.h>
int main()
{
    char str[100];
    char rev[100];
    int i=0,j,length,temp=0;
    printf("Enter a string");
    scanf("%s",str);
    while(str[i]!='\0')
    ++i;
    printf("the length of string%d",i);
    length=i;
    for(j=0;j<length;j++)
    {
        if(str[i]!=str[length-i-1])
        temp=1;
        break;
    }
    if(temp==0)
    printf("\nTHE NUMBER IS PALINDROME");
    else
    printf("\nthe number is not pallindrome");
    return 0;
}