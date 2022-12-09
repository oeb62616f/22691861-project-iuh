/*

Project: Lab09_problem_05
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <stdlib.h>

// Creating define 
// #define RAND_MAX 50

// Creating functions
void array_update(int *arr,int length);
void array_show(int *arr, int length, int per_row);

// Creating variables
int n;
int element_per_row;

// Main
int main()
{
    // // 1.1
    // printf("Pls enter value of n: ");
    // scanf("%d", &n);
    // int array_int[n];
    // array_update(&array_int, n);
    // printf("Enter element per row that you want to display: ");
    // scanf("%d", &element_per_row);
    // array_show(&array_int, n, element_per_row);
    // // 1.2
    // printf("Pls enter value of n: ");
    // scanf("%d", &n);
    // int array_b[n];
    // for (int i = 0; i < n; i++)
    // {
    //     array_b[i] = rand() % 50;
    //     printf("%d ", array_b[i]);
    // }

    return 1;
}



void array_update(int *arr,int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Pls enter value of element %d: ", i);
        scanf("%d", &arr[i]);
    }
}
void array_show(int *arr, int length, int per_row)
{
    printf("ELEMENT OF ARRAY:\n");
    int i = 0;
    while (i < length)
    {
        for (int j = 0; j < per_row; j++)
        {
            printf("%d      ", arr[i]);
            i++;
            if (i > length - 1)
            {
                break;
            }
        }
        printf("\n");
    }
}