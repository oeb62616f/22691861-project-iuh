/*

Project: Lap08_problem05
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 30/11/2022

*/

// Include
#include <stdio.h>

// Creating functions
int get_last_number(unsigned long *input);

// Creating variables
unsigned long number_input;
int sum;

// Main
int main()
{

    printf("Value of input: ");
    scanf("%lu", &number_input);

    while (number_input != 0)
    {
        sum += get_last_number(number_input);
        number_input /= 10;
    }

    printf("Sum: %d", sum);

    return 1;
}

int get_last_number(unsigned long input)
{
    int last_number = input % 10;
    return last_number;
}