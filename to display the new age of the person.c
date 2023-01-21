//to display the new age of the person
#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age :\n");
    scanf("%d", &age);
    printf("Enter your marks :\n");
    scanf("%d", &marks);
    if (age < 50)
    {
        marks += 60;
        printf("Your new score is : %d",marks);
    }
    else
    {
        marks += 40;
        printf("Your new score is : %d",marks);
    }
    return 0;
}