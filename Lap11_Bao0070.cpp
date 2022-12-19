/*

Project: Lab11_Bai0070
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
int max = -pow(2, sizeof(int) * 8 - 2);
int min = pow(2, sizeof(int) * 8 - 2);
int m;
int n;
int x;
int count_x;

// Main
int main()
{
    // a & b
    printf("Enter size of array 2d: ");
    scanf("%d %d", &m, &n);
    int array_int[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Value of A[%d][%d]: ", i, j);
            scanf("%d", &array_int[i][j]);
            max = max < array_int[i][j] ? array_int[i][j] : max;
            min = min > array_int[i][j] ? array_int[i][j] : min;
        }
    }

    printf("Max: %d || Min: %d", max, min);

    // c
    printf("\nValue of x to search: ");
    scanf("%d", &x);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count_x += x == array_int[i][j] ? 1 : 0;
        }
    }
    printf("Time x: %d\n", count_x);

    // d
    for (int row = 0; row < m; row++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (array_int[row][i] > array_int[row][j])
                {
                    int temp = array_int[row][i];
                    array_int[row][i] = array_int[row][j];
                    array_int[row][j] = temp;
                }
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", array_int[i][j]);
        }
        printf("\n");
    }
    return 1;
}