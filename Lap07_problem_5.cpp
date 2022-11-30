/*

Project: Lab07_problem_5
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: sum

Solution:
    - Using while
    - Using "Lãi kép"

Date: 23/07/2004

*/

// Include 
#include <stdio.h>

// Creating variables
long money_base;
long money_expect;
float interest_rate;
int month_wait = 0;
bool is_datatype = true;

// Main
int main()
{
    printf("Interest rate: ");
    scanf("%f", &interest_rate);
    printf("Money base: ");
    scanf("%li", &money_base);
    printf("Money expect: ");
    scanf("%li", &money_expect);

    while (money_base < money_expect)
    {
        month_wait++;
        money_base += (money_base * interest_rate / 100);
    }

    printf("After %d month you can buy new phone", month_wait);
    return 1;
}

