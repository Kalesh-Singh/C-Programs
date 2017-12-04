/* To calculate total billed amount considering discount if applicable. */
#include <stdio.h>
int main()
{
    int quantity, discount = 0;
    float rate;                         // rate per notebook
    float total;                        // total billed amount
    
    printf("Enter Quantity of notebooks:\t");
    scanf("%d", &quantity);
    printf("Enter rate of 1 notebook:\t");
    scanf("%f", &rate);
    
    if (quantity >= 100)
        discount = 10;
    total = (quantity * rate ) - (quantity * rate * discount / 100);

    printf("Total billed amount = %10.2f\n", total);

    return 0;
}
