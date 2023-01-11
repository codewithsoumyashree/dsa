//stack
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int stack[SIZE];
int TOP=-1;
void PUSH(int data);
int POP();
void display();
int main()
{
    int c, data;
     printf("\nPress 1 for PUSH \n");
	 printf("Press 2 for POP \n");
	 printf("Press 3 for DISPLAY \n");
	 printf("Press 4 for EXIT\n ");
	 printf("\nenter the choice: ");
	 scanf("%d",&c);
     switch(c)
     {
        case 1:
        {
            printf("Enter the element to be pushed:");
            scanf("%d",&data);
            PUSH(data);
            break;
        }

        case 2:
        {
            data=POP();
            printf("THE POPPED ITEM:%d",data);
            
        }
     }
}