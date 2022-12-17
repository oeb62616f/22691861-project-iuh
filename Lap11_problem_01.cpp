/*

Project: Lab11_Problem_01
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>

// Creating functions
unsigned long fib_1(unsigned long n, unsigned long *arr);
unsigned long fib_2(unsigned long n);
// Creating variables
unsigned long n;

// Main
int main()
{

    printf("Value of n: ");
    scanf("%d", &n);
    unsigned long arr[n];
    fib_1(n, arr);
    for (unsigned long *i = arr; i < arr + n; i++)
    {
        printf("%d ", *i);
    }

    printf("\n%d", fib_2(n));
    return 1;
}

unsigned long fib_1(unsigned long n, unsigned long *arr)
{
    if (n >= 1)
    {
        arr[0] = 1;
    }
    if (n >= 2)
    {
        arr[0] = 1;
        arr[1] = 1;
    }
    for (unsigned long *i = arr + 2; i < arr + n; i++)
    {
        *i = *(i - 1) + *(i - 2);
    }

    return arr[n-1];
}

unsigned long fib_2(unsigned long n)
{
    unsigned long a = 1;
    unsigned long b = 1;
    unsigned long temp;

    for (int i = 2; i < n; i++)
    {
        temp = b;
        b = a + b;
        a = temp;
    }
    return b;

}

