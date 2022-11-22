/*

Project: Lap07_Bai0046_nhom
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 19/11/2022

*/

// Include
#include <stdio.h>

// Creating define
#define PRICE_TAX_1 9000000
#define PRICE_TAX_2 20000000
#define PRICE_TAX_3 50000000

// Creating functions

// Creating variables
int number_staff;
long tax;
long salary_before_tax = 1;
long salary_after_tax;
float tax_average;
float salary_average;

// Main
int main()
{

    while (salary_before_tax != 0)
    {
        printf("Enter your salary: ");
        scanf("%li", &salary_before_tax);
        tax = 0;

        if (salary_before_tax < PRICE_TAX_1)
        {
            tax += salary_before_tax * 0;
        }

        if (salary_before_tax < PRICE_TAX_2 && salary_before_tax > PRICE_TAX_1)
        {
            tax += (salary_before_tax - 9000000) * 0.25;
        }

        if (salary_before_tax < PRICE_TAX_3 && salary_before_tax > PRICE_TAX_2)
        {
            tax += (PRICE_TAX_2 - PRICE_TAX_1 - 1) * 0.25;
            tax += (salary_before_tax - PRICE_TAX_2) * 0.4;
        }

        salary_after_tax = salary_before_tax - tax;
        number_staff++;

        printf("Salary of staff %d: %li\n", number_staff, salary_after_tax);
        printf("Tax of staff %d: %li\n", number_staff, tax);


        salary_average += salary_after_tax;
        tax_average += tax;
    }

    salary_average /= number_staff;
    tax_average /= number_staff;

    printf("\n\n");
    printf("Average salary: %f\n", salary_average);
    printf("Average tax: %f", tax_average);
    

    return 1;
}
