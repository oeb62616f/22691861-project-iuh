/*

Project: Lap07_Bai0037
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 19/11/2022

*/

// Include
#include <stdio.h>

// Creating variables
long S = 1;
int n;

// Main
int main()
{

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = n % 2 == 0 ? 2 : 1; i <= n; i += 2)
    {
        S *= i;
    }

    printf("S: %li", S);

    return 1;
}