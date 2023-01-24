//structure name,sex,age info of 10 people n find out the oldest man n age 
//structure name,sex,age info of 10 people n find out the oldest man n age 
#include <stdio.h>
#include <string.h>
struct information
{
    char name[100];
    char sex;
    int age;
};
int main()
{
struct information f[10];
int i,oldestmen=0,oldestfemale=0;
char fname[100],mname[100];
for(i=1;i<=10;i++)
{
    printf("ENTER THE NAME, SEX, AND AGE OF %d PERSON",i);
    scanf("%s%s%d",f[i].name,&f[i].sex,&f[i].age);
}
for(i=1;i<=10;i++)
{
    if(f[i].age >oldestmen && f[i].sex=='m')
    {
        oldestmen=f[i].age;
        strcpy(mname,f[i].name);
    }
    if(f[i].age >oldestfemale && f[i].sex=='f')
    {
        oldestfemale=f[i].age;
        strcpy(fname,f[i].name);
    }
}
printf("\nthe oldest female name %s of age %d",fname,oldestfemale);
printf("\nthe oldest men %s of age %d",mname,oldestmen);
return 0;
}