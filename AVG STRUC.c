// define a structure of employee having data members name, age, salary. Take data for n employees in an array and find the average salary of all employees.
#include<stdio.h>

int main()
{
    struct employee
    {
        char name[100];
        int age;
        float salary;
    };
    struct employee emp[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter name, age and salary of employee %d: ", i+1);
        scanf("%s %d %f", emp[i].name, &emp[i].age, &emp[i].salary);
    }
    float avg_salary = 0;
    for(i=0;i<3;i++)
    {
        avg_salary += emp[i].salary;
    }
    avg_salary /= 3;
    printf("Average salary of all employees is %.2f", avg_salary);
    return 0;
}