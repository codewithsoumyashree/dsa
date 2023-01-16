/*WAP to store n employee’s data such as employee name, gender,
designation, department, basic pay. Calculate the gross pay of each
employees as follows:
Gross pay = basic pay + HR + DA
HR=25% of basic and DA=75% of basic*/
#include<stdio.h>
#include<stdlib.h>
struct database
{
    char name[30];
    char gender;
    char designation[30];
    char dept[30];
    float basic;
    float hr;
    float da;
    float gross;
};
int main()
{
    struct database emp[20];
    int i,n;
    printf("Number of employees: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter information for employee %d: \n",i+1);
        printf("Name: ");
        scanf("\n%[^\n]s",emp[i].name);
        printf("Gender: ");
        scanf("\n%c",&emp[i].gender);
        printf("Designation: ");
        scanf("\n%[^\n]s",emp[i].designation);
        printf("Department: ");
        scanf("\n%[^\n]s",emp[i].dept);
        printf("Basic pay: ");
        scanf("%f",&emp[i].basic);
    }
    for (i=0;i<n;i++)
    {
        emp[i].hr = 0.25*emp[i].basic;
        emp[i].da = 0.75*emp[i].basic;
        emp[i].gross = emp[i].basic + emp[i].hr + emp[i].da;
    }
    printf("Employee details are as follows: \n");
    for (i=0;i<n;i++)
    {
        printf("Name: %s\nGender: %c\nDesignation: %s\nDepartment: %s\nGross Pay: %.2f\n",emp[i].name,emp[i].gender,emp[i].designation,emp[i].dept,emp[i].gross);
    }
    return 0;
}