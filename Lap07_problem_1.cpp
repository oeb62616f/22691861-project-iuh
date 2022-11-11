/*

Project: Lab07_problem_1
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: get input n until 0 <= n <= 100

Solution:
    - Using do while

Date: 11/11/2022

*/

// Include
#include <stdio.h>

// Creating variables
int n = 101;

// Main
int main()
{

    do
    {
        printf("Value of n: ");
        scanf("%d", &n);
    } while (n < 0 || n > 100);

    return 1;
}
