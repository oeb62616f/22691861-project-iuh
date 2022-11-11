/*

Project: Lab07_problem_4
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: sum

Solution:
    - Using while do

Date: 11/11/2022

*/

// Include
#include <stdio.h>

// Creating variables
float epsilon = 0;
float sum;
long n = 1;

// Main
int main()
{

    printf("Nhap sai so: ");
    scanf("%f", &epsilon);

    while ((1.0 / n) >= epsilon)
    {
        sum += (1.0 / n);
        n++;
    }

    printf("sum: %f\n", sum);
    // printf("%li", n);
    return 1;
}
