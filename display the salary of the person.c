//display the salary of the person
#include <stdio.h>
int main()
{
    float basic_salary, hra, da,gross;
    printf(" ENTER YOUR BASIC SALARY");
    scanf("%f",&basic_salary);
    if(basic_salary<1500)
    {
        hra=basic_salary*10/100;
        da=basic_salary*40/100;
    }
    else
    {
        hra=500;
        da=basic_salary*50/100;
    }
    gross=basic_salary+hra+da;
    printf("GROSS SALARY= RS.",gross);
    return(0);
}