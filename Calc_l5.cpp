/*

Project: Credit
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: 

Solution:

Date: 28/10/2022

*/

// Include 
#include <stdio.h>
#include <conio.h>

// Creating variables
double num1;
double num2;
double result;
char op;

// Main
int main()
{

    // Input
    printf("op: ");
    scanf(" %c", &op);
    printf("num1: ");
    scanf(" %lf", &num1);
    printf("num2: ");
    scanf(" %lf", &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("%.2f",result);
        break;
    case '-':
        result = num1 - num2;
        printf("%.2f",result);
        break;
    case '/':
        if(num2 == 0)
        {
            printf("Divide by 0");
        }
        else
        {
            result = num1 / num2;
            printf("%.2f",result);
        }
        break;
    case '*':
        result = num1 * num2;
        printf("%.2f",result);
        break;
    case '%':
        result = (int)num1 % (int)num2;
        printf("%.2f",result);
        break;    
    default:
        printf("op isnt supported");
        break;
    }
    
    return 1;
}
