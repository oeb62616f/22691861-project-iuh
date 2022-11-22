/*

Project: Lap07_Bai0036
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 19/11/2022

*/

// Include
#include <stdio.h>

// Creating variables
float S3 = 1;
long S4;
int n;

// Main
int main()
{

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (float i = 1; i <= n; i++)
    {
        S3 *= ((2 * i - 1) / (2 * i));
        S4 += i*(i+1)*(i+2);
    }

    printf("S3: %f\n", S3);
    printf("S4: %li", S4);


    return 1;
}