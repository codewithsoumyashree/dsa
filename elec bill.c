#include <stdio.h>
int elecbill(int n);
int main()
{
    int unit = 0;
    printf("Enter the unit consumed : ");
    scanf("%d", &unit);
    bill(unit);

    return 0;
}
void bill(int unit)
{
    int amount;
    if (unit <= 100)
    {
        amount = unit * 3.5;
    }
    else if (unit > 100 && unit <= 200)
    {
        amount = 100 * 3.5 + (unit - 100) * 4.5;
    }
    else if (unit > 200 && unit <= 300)
    {
        amount = 100 * 3.5 + 100 * 4.5 + (unit - 200) * 5;
    }
    else
    {
        amount = 100 * 3.5 + 100 * 4.5 + 100 * 5 + (unit - 300) * 6;
    }
    printf("The amount to be paid is %d", amount);
}