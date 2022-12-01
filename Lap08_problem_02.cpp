/*

Project: Lap08_problem02
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 30/11/2022

*/

// Include
#include <stdio.h>
#include <math.h>

// Creating functions
double get_length_vector(double a1, double b1, double a2, double b2);

// Creating variables
double num;
double a1;
double b1;
double a2;
double b2;
bool is_datatype = true;

// Main
int main()
{

    // 2.1
    printf("Value of a: ");
    scanf("%lf", &num);
    printf("sqrt of a: %lf\n", sqrt(num));

    // 2.2
    printf("Coordinate of A: ");
    scanf("%lf %lf", &a1, &b1);
    printf("Coordinate of B: ");
    scanf("%lf %lf", &a2, &b2);
    printf("Length of AB: %lf", get_length_vector(a1, b1, a2, b2));

    return 1;
}

double get_length_vector(double a1, double b1, double a2, double b2)
{
    double length = sqrt(pow(a1 - a2, 2) + pow(b1 - b2, 2));
    return length;
}