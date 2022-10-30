/*

Project: Lab_No6 problem 2
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: 

Solution: 
    - Using Geometric Progression
    - Using for loop 

Date: 30/10/2022

*/

// Include 
#include <stdio.h>
#include <math.h>

// Creating functions
float get_drew_area(float a, float b);

// Creating variables;
double area = 1;
// double drew_area = 0; // 0.998046875  
// double non_drew_area; // 0.001953125

double drew_area = (0.5 * (pow(0.5,9) - 1)) / (0.5 - 1);
double non_drew_area = area - drew_area;
// Main
int main()
{
    // for (int i = 1; i <= 9; i++)
    // {
    //     drew_area += area / pow(2,i);
    // }
    // non_drew_area = area - drew_area;


    printf("white area: %.9lf", non_drew_area);

    return 1;
}
