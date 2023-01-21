//to take 10 numbers and check the num is odd or not and then display the sum of odd no
#include <stdio.h>
int main()
{
    int num,sum=0,i,count=0;
    for(i=1;i<=10;i++)
    {
        printf("Enter the number %d",i);
        scanf("%d",&num);
        if(num%2==1)
        {
            count++;
            sum+=num;
        }

    }
    printf("TOTAL NUMBER OF ODD NUMBERS ARE: %d AND SUM OF ODD NUMER = %d",count,sum);
}