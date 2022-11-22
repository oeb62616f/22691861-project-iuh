/*

Project: Lap07_Bai0041
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 19/11/2022

*/

// Include
#include <stdio.h>

// Creating variables
float S = 1;
int n;

// Main
int main()
{

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (float i = 1; i <= n; i++)
    {
        S *= (2 * i - 1) / (2 * i);
    }

    printf("S: %f", S);

    return 1;
}