/*

Project: Lab09_Bai0055
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>

// Creating funtions
float get_min(float a, float b);
float get_max(float a, float b);

// Creating variables
int n;
float temp;
float min = 3.4E+38;
float max = 1.2e-38;

//  Main
int main()
{

    printf("Value of n: ");
    scanf("%d", &n);

    for (int i = 1; i<= n; i++)
    {
        printf("Value of number %d: ",i);
        scanf("%f", &temp);
        min = get_min(temp,min);
        max = get_max(temp,max);
    }

    printf("Min: %.2f\n", min);
    printf("Max: %.2f", max);

    return 1;
}

float get_min(float a, float b)
{
    return a < b ? a : b;
}
float get_max(float a, float b)
{
    return a > b ? a : b;
}