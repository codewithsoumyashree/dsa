// Write the program to display whether a vehicle moves with constant velocity/ acceleartion/ deccelration
#include <stdio.h>
int main()
{
    int a;
    printf("\n enter the value");
    scanf("%d",&a);
    printf("THE VEHICLE MOVE WITH");
    if(a==0)
       printf("constant velocity");
    else if("a>0")
       printf("accleartion velocity");
    else 
       printf("deacclearted velocity");

return 0;
}