/*

Project: Lab11_Bai0068
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <stdlib.h>

// Creating define
#define ARRAY_ROW 5
#define ARRAY_COLUMN 4

// Creating variables
int array_random[ARRAY_ROW][ARRAY_COLUMN];

// Main
int main()
{
    for (int j = 0; j < ARRAY_COLUMN; j++)
    {
        printf("ROW %d: \n", j + 1);
        for (int i = 0; i < ARRAY_ROW; i++)
        {
            array_random[i][j] = rand();
            printf("%d\n", array_random[i][j]);
        }
        printf("\n");
    }

    return 1;
}