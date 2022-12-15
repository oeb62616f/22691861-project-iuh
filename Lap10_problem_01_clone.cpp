/*

Project: Lab10_problem_01
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <stdlib.h>

// Creating define

// Creating functions
void array_update(int *arr, int length);
void array_show(int *arr, int length, int element_per_row);
void slove_problem_1();
void slove_problem_2();
void slove_problem_3();

// Creating variables

// Main
int main()
{
    // 1.1
    slove_problem_1();

    // 1.2
    slove_problem_2();

    // 1.3
    slove_problem_3();

    return 1;
}

void array_update(int *arr, int length)
{
    int index = 1;
    for (int *i = arr; i < arr + length; i++)
    {
        printf("Value of element A[%d]: ", index);
        scanf("%d", &*i);
        index++;
    }
}
void array_show(int *arr, int length, int element_per_row)
{
    int index = 1;
    int *i = arr;
    while (i < arr + length)
    {
        printf("%d      ", *i);
        if (index == element_per_row)
        {
            printf("\n");
            index = 0;
        }
        i++;
        index++;
    }
}

void slove_problem_1()
{
    int element_per_row;
    int n;
    printf("\n---- 1.1 -----\n");
    // Enter how many element of array
    printf("value of n: ");
    scanf("%d", &n);
    // Creating array
    int arr_1_1[n];
    // Enter value for array
    array_update(arr_1_1, n);

    printf("How many element per row that you want: ");
    scanf("%d", &element_per_row);
    // Show array with ? element per row
    array_show(arr_1_1, n, element_per_row);
}

void slove_problem_3()
{
    printf("\n---- 1.3 -----\n");
    int n;
    float min;
    float max;
    printf("Value of n: ");
    scanf("%d", &n);
    printf("Value of a: ");
    scanf("%f", &min);
    printf("Value of b: ");
    scanf("%f", &max);

    float arr_1_3[n];

    int index = 1;
    float *i = arr_1_3;
    while (i < arr_1_3 + n)
    {
        printf("Value of element A[%d]: ", index);
        scanf("%f", &*i);
        if (*i >= min && *i <= max)
        {
            i++;
            index++;
        }
        else
        {
            printf("Pls enter value between %.2f and %.2f\n", min, max);
        }
    }

    for (float *f_ptr = arr_1_3 + n - 1; f_ptr >= arr_1_3; f_ptr--)
    {
        printf("%.2f ", *f_ptr);
    }
}
void slove_problem_2()
{
    int n;
    printf("\n---- 1.2 -----\n");
    printf("Value of n: ");
    scanf("%d", &n);
    int arr_1_2[n];

    for (int *i = arr_1_2; i < arr_1_2 + n; i++)
    {
        *i = rand() % n;
        printf("%d ", *i);
    }
}