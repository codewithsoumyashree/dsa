//to find the substring present or not
#include <stdio.h>
int main()
{
    char str[100];
    char find[100];
    int count1=0,count2=0,i,j,flag;
    printf("INPUT THE STRING");
    scanf("%s",str);
    printf("INPUT THE WORD TO BE SEARCHED");
    scanf("%s",find);
    while(str[count1]!='\0')
    count1++;
    while(find[count2]!='\0')
    count2++;
    for(i=0;i<=count1-count2;i++)
    {
        for(j=i;j<i+count2;j++)
        {
            flag=1;
            if(str[j]!=find[j-i])
            {
                flag=0;
                break;
            }
        }
    if(flag==1)
    break;
    }
    if(flag==1)
    printf("present");
    else
    printf("absent");
}