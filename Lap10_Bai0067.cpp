/*

Project: Lab10_Bai0067
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <stdlib.h>

// Creating variables
int n;

int main()
{

    printf("Value of n: ");
    scanf("%d", &n);
    int arr[n];
    for (int *i = arr; i < arr + n; i++)
    {
        *i = rand() % 50;
        // printf("%d ", *i);
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

    printf("\n%d", arr[1]);

    return 1;
}