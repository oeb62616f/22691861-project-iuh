/*

Project: Lab08_Bai0047.cpp
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include 
#include <stdio.h>

// Creating define
#define MONEY_TAX_1 9000000
#define MONEY_TAX_2 20000000
#define TAX_1 0.25
#define TAX_2 0.4

// Creating functions
int get_tax(int money);

// Creating variables
int money;
int tax;
bool is_datatype = true;

// Main
int main()
{

    printf("Enter your money you have: ");
    scanf("%d", &money);

    printf("Tax will be pay: %d", get_tax(money));

    return 1;
}

int get_tax(int money)
{
    int tax;

    if (money > MONEY_TAX_2)
    {
        tax = get_tax(MONEY_TAX_2) + (money - MONEY_TAX_2) * TAX_2;
    }
    else if (money > MONEY_TAX_1)
    {
        tax = (money - MONEY_TAX_1) * TAX_1;
    }
    else 
    {
        tax = 0;
    }

    return tax;
}