/*

Project: Lab10_Bai0065
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <stdlib.h>
// Creating functions

// Main
int main()
{
    int n;
    int *arr;
    int value;
    printf("Value of n: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (int *i = arr; i < arr + n; i++)
    {
        *i = rand() % 50;
    }

    for (int *i = arr; i < arr + n; i++)
    {
        for (int *j = i + 1; j < arr + n; j++)
        {
            if (*i < *j)
            {
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
    printf("Value append: ");
    scanf("%d", &value);
    realloc(arr, ++n);
    arr[n - 1] = value;
    for (int *i = arr; i < arr + n; i++)
    {
        printf("%d ", *i);
    }

    return 1;
}