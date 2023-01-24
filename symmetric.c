//to check symmetric or not
#include <stdio.h>
int main()
{
    int i, j,t;
    int a[4][4];
    int b[4][4];
    printf("enter the elements\n");
    for (i = 0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i = 0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            b[i][j] = a[j][i];
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] != b[i][j])
            {
                printf("not symmetric\n");
                return 0;
            }
        }
    }
    printf("symmetric\n");

    return 0;
}

