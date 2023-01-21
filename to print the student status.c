//to print the student status
#include <stdio.h>
int main()
{
    int input;
    printf("ENTER YOUR CLASS");
    scanf("%d",&input);
    if(input<=12)
    printf("\n THE STUDENT IS IN KIIT SCHOOL STUDENT");
    else
    printf("\n THE STUDENT IS IN KIIT UNIVERSITY");
    return(0);
}