//display the largest of three numbers 
#include <stdio.h>
int main()
{
    int n1, n2, n3, max;
    printf("ENTER THE THREE NUMBERS\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    max=n1;
    if(n2>max)
    max=n2;
    if(n3>max)
    max=n3;
    printf("THE LARGEST NUMBER IS:%d", max);
    return(0);
    }
}