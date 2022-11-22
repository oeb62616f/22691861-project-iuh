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

// Creating variables
float S;
int n;

// Main
int main()
{

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n ; i++)
    {
        S += (i % 2 == 0? -1.0:1.0) / pow(2*i,2);
    }

    printf("S: %f", S);

    return 1;
}