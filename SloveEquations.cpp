/*

Project: SolQuad
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: Show result of equation

Solution:
    - Step 1: Get quadratic equation
    - Step 2: What kind of equation is detected?
    - Step 3: In case:
        + First-degree equation: y = ax + b:
            > do something
        + Second-degree equation: y = ax^2 + bx + c
            > do something
    - Step 4: Show result    

Date: 09/10/2022

*/

// Includes
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

// Creating function
void solveFirstDegreeEquation(int b, int c, bool isVN, bool isVSN , double *x1);
void solveSecondDegreeEquation(int a, int b, int c, bool isVN,double *x1, double *x2);


// Creating variables
int a = 0;
int b = 0;
int c = 0;
double x1;
double x2;
bool isVN;
bool isVSN;

// Main
int main()
{

    // Input
    printf("Solve first and second degree equation\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    // printf("%d x^2 + %d x + %d = 0\n", a, b , c);

    if (a == 0)
    {
        solveFirstDegreeEquation(b, c, isVN, isVSN, &x1);
        printf("Nghiem cua phuong trinh: ");
        printf("%d x + %d = 0\n", b , c);
        printf("x: %lf", x1);
    }
    else
    {
        solveSecondDegreeEquation(a, b, c, isVN, &x1, &x2);
        printf("Nghiem cua phuong trinh: ");
        printf("%d x^2 + %d x + %d = 0\n", a, b , c);
        printf("x1: %lf || x2: %lf ", x1, x2);
    }

    return 1;
}




void solveSecondDegreeEquation(int a, int b, int c, bool isVN, double *x1, double *x2) // form ax^2 + bx + c = 0
{

    double delta = pow(b,2) - 4 * a * c;

    if (delta > 0)
    {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);  
    }
    else if (delta < 0)
    {
        isVN = true;      
    }
    else
    {
        *x1 = *x2 = -b / a / 2;
    }

}

void solveFirstDegreeEquation(int b, int c, bool isVN, bool isVSN , double *x1)
{
    if (b == 0 && c == 0)
    {
        isVSN = true;
    }
    else if (b != 0)
    {
        *x1 = -c / b;
    }
    else if (b == 0 && c != 0)
    {
        isVN = false;
    }
}





