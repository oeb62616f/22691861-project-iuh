/*

Project: Lap07_Bai0042
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 19/11/2022

*/

// Include 
#include <stdio.h>

// Creating variables
int n;
int s1 = 0;     //f0
int s2 = 1;     //f1
int s3;     //f2
long sum = s1 + s2;

// Main
int main()
{

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        s3 = s1 + s2;
        s1 = s2;
        s2 = s3;
        sum += s3;
    }

    printf("Total sum of fibonaci: %li", sum);

    


    return 1;
}