//assign dynamically 2D array ([n][COL]) n find sum of row elements
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,col,sum=0;
    int(*a)[col];
    printf("ENTER NUMBER OF ROWS:");
    scanf("%d",&n);
    printf("ENTER NUMBER OF COLUMN:");
    scanf("%d",&col);
    a=(int(*)[col])malloc(n*col*sizeof(int));
    printf("ENTER ARRAY ELEMENTS:");
    for(i=0;i<n;i++)
    for(j=0;j<col;j++)
    {
        scanf("%d",&a[i][j]);
        sum+=a[i][j];
    }
    printf("THE SUM OF THE ARRAY ROW ELEMENTS:%d",sum);
    return 0;
}