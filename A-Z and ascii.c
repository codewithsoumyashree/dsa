//to display character and its ASC II value from A-Z
#include <stdio.h>
void ascii_value()
{
    int i,l;
    printf("CHARACTER\tASC II VALUE\n");
    for(i=65;i<=90;i++)
    {
        
        printf("%c\t\t%d\n",i,i);
    }
}
int main()
{
    ascii_value();
    return(0);
}