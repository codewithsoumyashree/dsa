//read content of a file ,store it onto an array nd find the sum of the element
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fsoumya;
    int a[10],i,sum=0;
    fsoumya=fopen("file1.in","r");
    for(i=0;i<10;i++)
    {
        fscanf(fsoumya,"%d",&a[i]);
        printf("%d",a[i]);
        sum+=a[i];
    }
    printf("SUM=%d",sum);
    for(i=9;i>=0;i--)
    printf("\n%d",a[i]);
    fclose(fsoumya);
    return(0);
}