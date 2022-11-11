/*

Project: Bai0029
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: show factorial

Solution:

Date: 11/11/2022

*/

// Include
#include <stdio.h>

// Creating variables
int num1;
int num2;
bool is_datatype = true;

// Main
int main()
{

    // Input num1 & num2
    printf("Value of number 1: ");
    scanf("%d", &num1);
    printf("Value of number 2: ");
    scanf("%d", &num2);

    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 -= num2;
        }
        else
        {
            num2 -= num1;
        }
    }

    printf("UCLN: %d", num1);

    return 1;
}