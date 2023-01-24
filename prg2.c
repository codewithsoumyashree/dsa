//matrix of [10][10] from disk add last column of the matrix
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fsoumya;
    int a[3][3],i,j,sumcol=0;
    fsoumya=fopen("file2.in","r");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        fscanf(fsoumya,"%d",&a[i][j]);
        for(j=0;j<2;j++)
        sumcol+=a[j];
    }
    printf("\nSUM=%d",sumcol);
    return(0);
}