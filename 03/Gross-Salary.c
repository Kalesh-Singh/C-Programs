/* Calculation of gross salary of an employee */
#include <stdio.h>
int main()
{
    int basic_salary;
    float hra, conveyance, ma;  // hra --> house rent allowance, ma --> medical allowance
    float gross_salary;

    printf("Enter Basic Salary of an employee:\t");
    scanf("%d", &basic_salary);

    if (basic_salary < 2000)
    {
       hra = basic_salary * 0.30;
       conveyance = basic_salary * 0.25;
       ma = basic_salary * 0.10;
    }
    else
    {
        hra = basic_salary * 0.40;
        conveyance = basic_salary * 0.15;
        ma = 500;
    }

    gross_salary = basic_salary + hra + conveyance + ma;

    printf("Gross salary = %10.2f\n", gross_salary); 
    return 0; 
}
