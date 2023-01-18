//concatination of two string
#include <stdio.h>
int main()
{
    char s1[100],s2[100],ch;
    int i=0,j,k;
    printf("ENTER FIRST STRING:");
    scanf("%s",s1);
    scanf("%c",&ch);
    printf("\nENTER SECOND STRING:");
    scanf("%s",s2);
    while(s1[i]!='\0')
    ++i;
    j=0;
    while(s1[i++]=s2[j++]);
    s1[i]='\0';
    printf("\nAfter concatenation:%s",s1);
    return 0;
}