/*

Project: Lab08_Bai0050.cpp
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>

// Creating functions
int get_fibonacci(int n);

// Creating variables
int n;

// Main
int main()
{
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Value of fibonacci %dth: %d", n, get_fibonacci(n));
    return 1;
}

int get_fibonacci(int n)
{
    int f1 = 1;
    int f2 = 1;
    int f3;
    for (int i = 3; i <= n; i++)
    {
        f3 = f2 + f1;
        f1 = f2;
        f2 = f3;
    }

    if (n == 1 || n == 2)
    {
        return 1;
    }

    return f3;
}