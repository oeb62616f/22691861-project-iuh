/*

Project: Lab10_Bai0062
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>

// Creating variables
int n = 10;

// Main
int main()
{
    int arr[n];
    int index = 0;
    for (int *i = arr; i < arr + n; i++)
    {
        *i = index;
        index++;
        printf("%d ", *i);
    }
}