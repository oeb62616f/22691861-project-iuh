/*

Project: Lab11_Bai0069
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Creating define

// Creating variables

float array_float[20][20];
float max = -pow(2, sizeof(array_float) - 2);
int row;
int column;
bool is_datatype = true;

// Main
int main()
{

    printf("Enter size of array 2d: ");
    scanf("%d %d", &row, &column);

    if (row > 20 || column > 20)
    {
        is_datatype = false;
    }

    if (is_datatype)
    {
        for (int i = 0; i < column; i++)
        {
            for (int j = 0; j < row; j++)
            {
                printf("Value of A[%d][%d]: ", i, j);
                scanf("%f", &array_float[i][j]);
                max = max < array_float[i][j] ? array_float[i][j] : max;
            }
        }
        printf("Max: %.2f", max);
    }
    else
    {
        printf("Wrong input, the matrix just 20x20");
    }

    return 1;
}