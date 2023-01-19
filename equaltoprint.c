#include <stdio.h>

void display();
void main()
{
    display();
    printf("\n");
    printf("The number of equal to is equal to 10 times");
}
void display()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("=");
    }
}