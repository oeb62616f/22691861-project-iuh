/*

Project: Lab10_problem_2
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
void array_update(int *arr, int length);
void array_show(int *arr, int length, int per_row);
void problem_1_1();
void problem_1_2();
void problem_1_3();

// Creating variables

// Main
int main()
{
    problem_1_1();
    problem_1_2();
    problem_1_3();
    return 1;
}

void array_update(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Pls enter value of element %d: ", i + 1);
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

void problem_1_1()
{
    printf("Problem 1.1\n");
    int n;
    int element_per_row;
    printf("Pls enter value of n: ");
    scanf("%d", &n);
    int array_int_1_1[n];
    array_update(array_int_1_1, n);
    printf("Enter element per row that you want to display: ");
    scanf("%d", &element_per_row);
    array_show(array_int_1_1, n, element_per_row);
}

void problem_1_2()
{
    printf("\nProblem 1.2\n");
    int n;
    int sum;
    printf("Pls enter value of n: ");
    scanf("%d", &n);
    int array_1_3[n];
    for (int i = 0; i < n; i++)
    {
        array_1_3[i] = rand() % 50;
        sum += array_1_3[i];
        printf("%d ", array_1_3[i]);
    }
    printf("\nSum of array: %d\n", sum);
}
void problem_1_3()
{
    printf("\nProblem 1.3\n");
    int n;
    int a;
    int b;
    float temp;
    printf("Pls enter value of n: ");
    scanf("%d", &n);
    printf("Pls enter value of a: ");
    scanf("%d", &a);
    printf("Pls enter value of b: ");
    scanf("%d", &b);
    float array_1_3[n];
    temp = (a + b) / 2;

    for (int i = 0; i < n;)
    {
        printf("Value of element %d: ", i + 1);
        scanf("%f", &temp);
        if (temp >= a && temp <= b)
        {
            array_1_3[i] = temp;
            i++;
        }
        else
        {
            printf("dude pls enter value between %d and %d\n", a, b);
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%.2f ", array_1_3[i]);
    }

}