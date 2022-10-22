/*

Project: Taylor
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: show result in terminal

Solution:

Date: 19/10/2022

*/

// Include
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Creating functions
int factorial(int n);

// Creating variables
float x;
float err;
float result_err = 1000;
double result = 0;
int n = 0;

// Main
int main() 
{
    printf("x: ");
    scanf("%f", &x);
    printf("err: ");
    scanf("%f", &err);

    while(result_err > err)
    {
        result_err = fabs(pow(x,n+1)/factorial(n+1));
        result += (pow(x,n) / factorial(n));
        n++;
    }  
    printf("e^x: %lf", result);

}


int factorial(int n)
{
    int result = 1;
    for (int index = 1; index <= n; index++)
    {
        result *= index;
    }
    return result;
}


