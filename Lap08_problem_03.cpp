/*

Project: Lap08_problem03
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 30/11/2022

*/

// Include
#include <stdio.h>
#include <math.h>

// Creating functions
unsigned long get_factorial(int n);

// Creating variables
int n;
unsigned long sum;
bool is_datatype = true;

// Main
int main()
{

    printf("Value of n: ");
    scanf("%d", &n);
    for (int i= 0; i <= n; i++)
    {
        sum += get_factorial(i);
    }
    printf("Sum: %lu", sum);
    
    return 1;
}

unsigned long get_factorial(int n)
{

    unsigned long result = 1;

    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }

    return result;
}