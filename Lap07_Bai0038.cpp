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
long S;
int n;

// Main
int main()
{

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        S += pow(2 * i + 1, 2);
    }

    printf("S: %li", S);

    return 1;
}