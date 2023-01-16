/*WAP to add two distances (in km-meter) by passing structure to a function.*/
#include<stdio.h>
#include<stdlib.h>
struct distances
{
    int km1,km2;
    int m1,m2;
};
void getdata(struct distances D1);
int main()
{
  struct distances D1;

  printf("\nPlease Enter the Distance 1: \n");
  printf("\nPlease Enter the Kilometer covered: \n");
  scanf("%d",&D1.km1);
  printf("\nPlease Enter the meter covered:\n");
  scanf("%d",&D1.m1);

  printf("\nPlease Enter the Distance 2: \n");
  printf("\nPlease Enter the Kilometer covered: \n");
  scanf("%d",&D1.km2);
  printf("\nPlease Enter the meter covered:\n");
  scanf("%d",&D1.m2);
  
  getdata(D1);   
  return 0;
}
void getdata(struct distances D1)
{
  int sumk, summ;
  summ = D1.m1+D1.m2;
  sumk = D1.km1 + D1.km2+(summ/1000);
  summ= summ%1000;
  printf("THE TOTAL DISTANCE AFTER ADDING IS:%d KMs AND %d Ms",sumk,summ);
}