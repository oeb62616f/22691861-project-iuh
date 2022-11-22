/*

Project: Lap07_Bai0046
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 19/11/2022

*/

// Include 
#include <stdio.h>

// Creating variables
long n;
float A;
float sum;

// Main
int main()
{

    printf("Enter value of A: ");
    scanf("%f", &A);

    while (sum < A)
    {
        n++;
        sum += 1.0 / n;
    }

    printf("n: %li", n);


    return 1;
}

