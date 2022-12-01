/*

Project: Bai0034
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: show factorial

Solution:

Date: 11/11/2022

*/

// Include
#include <stdio.h>

// Creating variables
int n;
int element;
long sum = 0;
bool is_datatype = true;

// Main
int main()
{

    // Input n
    printf("Value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Value of element %d: ", i);
        scanf("%d", &element);
        sum += element;
    }

    printf("average: %f", (float)sum / n);

    return 1;
}