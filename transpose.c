//wap to find out transpose of a matrix
#include <stdio.h>
int main()
{
    int i, j,t;
    int a[4][4];
    printf("enter the elements\n");
    for (i = 0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the number to be multiplied:\n");
    scanf("%d",&t);
    for (i = 0; i <4 ; i++)
    {
        for (j = 0; j <4; j++)
        {
            printf("%d\t", t*a[i][j]);
        }
        printf("\n");
    }
}