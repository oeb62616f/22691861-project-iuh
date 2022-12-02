/*

Project: Lab09_problem_03
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>

// Creating functions
void sub(int x, int *y);

// Creating variables
int a;
int b;

// Main
int main()
{

    printf("Value of a: ");
    scanf("%d", &a);
    printf("Value of b: ");
    scanf("%d", &b);

    sub(b, &a);
    printf("%d || %d", a, b);

    return 1;
}

void sub(int x, int *y)
{
    x = x + *y;
    *y = x + *y;
}