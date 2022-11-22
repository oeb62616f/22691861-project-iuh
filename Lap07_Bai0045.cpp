/*

Project: Lap07_Bai0045
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 19/11/2022

*/

// Include
#include <stdio.h>

// Creating variables
int n;
long s;

// Main
int main()
{

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        s += i;
    }

    printf("Sum: %li", s);

    return 1;
}