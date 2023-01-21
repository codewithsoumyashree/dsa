//to display topper
#include <stdio.h>
int main()
{
    int i=1,chem,bio,pcom,math,eng,rollno,total,topperm=0,toppern;
    if(i<=8)
    {
    printf("enter your roll number:");
    scanf("%d",&rollno);
    printf("enter your chem, bio, pcom, math, eng, marks :");
    scanf("%d%d%d%d%d",&chem,&bio,&pcom,&math,&eng);
    total=chem+bio+pcom+math+eng;
    if(total>topperm)
    {
        topperm=total;
        toppern=rollno;
    }
    i++;
    }
    printf("THE TOPPER OF THE CLASS IS:%d",toppern);
}