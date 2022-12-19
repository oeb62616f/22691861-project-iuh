/*

Project: Lab11_Bai0071
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Includes
#include <stdio.h>
#include <stdlib.h>

// Creating defines

// Creating functions
void recall_array(int end, int *array_result, int *array_bool);
int get_factorial(int n);

// Creating variables
int n;
// Main
int main()
{
    printf("Value of n: ");
    scanf("%d", &n);
    int *bool_is_used = (int *)calloc(get_factorial(n), sizeof(int));
    int *array_show = (int *)malloc(n  * sizeof(int));
    recall_array(0, array_show, bool_is_used);
    free(bool_is_used);
    free(array_show);
    return 1;
}

void recall_array(int end, int *array_result, int *array_bool)
{
    for (int i = 0; i < n; i++)
    {
        if (!array_bool[i])
        {
            array_result[end] = i + 1;
            array_bool[i] = 1;
            if (end == n - 1)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%d ", array_result[j]);
                }
                printf("\n");
            }
            else
            {
                recall_array(end + 1, array_result, array_bool);
            }
            array_bool[i] = 0;
        }
    }
}

int get_factorial(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}