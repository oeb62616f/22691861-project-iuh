/*

Project: Lap07_Bai0037
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 19/11/2022

*/

// Include
#include <stdio.h>
#include <math.h>

// Creating functions
long get_factorial(int num);

// Creating variables
float S;
float x;
int n;

// Main
int main()
{

    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of x: ");
    scanf("%d", &x);

    for (int i = 0; i <= n; i++)
    {
        S += pow(x,i) / get_factorial(i);
    }

    printf("S: %f", S);

    return 1;
}



long get_factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    long result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}