//to enter 4 rows and 5 column in an array
#include <stdio.h>
int main()
{
    int i, j;
    int a[4][5];
    printf("enter the elements\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the elements are\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}