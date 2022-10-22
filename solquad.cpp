/*

Project: SolQuad
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: Show result 

Solution:
    - Step 1: Get quadratic equation
    - Step 2: Get delta
    - Step 3: In case:
        + Delta = 0
        + Delta > 0
        + Delta < 0
    - Step 4: Show result 

Date: 09/10/2022

*/

// Include
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

// Creating function
void sloveQuadraticEquation(int a, int b, int c, bool isVN,double *x1, double *x2);

// Creating variables
int a;
int b;
int c;
double x1;
double x2;
bool isVN = false;

// Main
int main()
{
    // Input
    printf("Value of 'a' form quadratic equation (make sure a <> 0): "); // get data for variable 'a'
    scanf("%d", &a);

    printf("Value of 'b' form quadratic equation: "); // get data for variable 'b'
    scanf("%d", &b);

    printf("Value of 'c' form quadratic equation: "); // get data for variable 'c'
    scanf("%d", &c);

    // Check condition
    if (a == 0) 
    {
        printf("Please a <> 0, u little suck ");
        getch();
        exit(0);
    } 

    // Calculate by calling function
    sloveQuadraticEquation(a, b, c, isVN, &x1, &x2);
    printf("%lf || %lf ", x1, x2);
    // Show result
    if (isVN == false)
    {
        if (x1 == x2)
        {
            printf("x1 = x2 = %lf", x1);
        }
        else
        {
            printf("x1 = %lf || x2 = %lf", x1, x2);
        }
    }
    else
    {
        printf("Vo nghiem");
    }

    return 1;

}

void sloveQuadraticEquation(int a, int b, int c, bool isVN,double *x1, double *x2)
{

    double delta = pow(b,2) - 4 * a * c;

    if (delta > 0)
    {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);  
    }
    else if (delta < 0)
    {
        *x1 = *x2 = -b / a;      
    }
    else
    {
        isVN = true;
    }

}