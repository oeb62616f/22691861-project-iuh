/*

Project: Lab10_problem_03
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Creating functions
void input(int *arr, int length);
void output(int *arr, int length);
int max(int *arr, int length);
int min(int *arr, int length);
int search(int *arr, int length, int value);
void array_append(int *arr, int *length, int value);
void array_insert(int *arr, int *length, int index, int value);
void array_delete(int *arr, int *length, int index);
void array_sort(int *arr, int length);

// Creating variables
int n;

// Main
int main()
{
    int *arr;
    printf("Value of n: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    input(arr, n);
    output(arr, n);
    array_append(arr, &n, 12);
    printf("\nappend\n");
    output(arr, n);
    printf("\ninsert\n");
    array_insert(arr, &n, 1, 14);
    output(arr, n);
    printf("\n delete\n");
    array_delete(arr, &n, 1);
    output(arr, n);
    
    printf("\nsort\n");
    array_sort(arr, n);
    output(arr, n);
    free(arr);
    return 1;
}
void input(int *arr, int length)
{
    for (int *i = arr; i < arr + length; i++)
    {
        *i = (rand() % 10) * (rand() % 10) + (rand() % 10);
    }
}
void output(int *arr, int length)
{
    for (int *i = arr; i < arr + length; i++)
    {
        printf("%d ", *i);
    }
}
int max(int *arr, int length)
{
    int max = -1;
    for (int *i = arr; i < arr + length; i++)
    {
        max = max < *i ? *i : max;
    }
    return max;
}
int min(int *arr, int length)
{
    int min = 99999;
    for (int *i = arr; i < arr + length; i++)
    {
        min = min > *i ? *i : min;
    }
    return min;
}
int search(int *arr, int length, int value)
{
    int index = 0;
    for (int *i = arr; i < arr + length; i++)
    {
        if (*i == value)
        {
            return index;
        }
        index++;
    }
    return -1;
}
void array_append(int *arr, int *length, int value)
{
    *length += 1;
    realloc(arr, *length);
    arr[*length - 1] = value;
}
void array_insert(int *arr, int *length, int index, int value)
{
    *length += 1;
    realloc(arr, *length);
    for (int *i = arr + *length; i > arr; i--)
    {
        *i = *(i - 1);
    }
    arr[index] = value;
}
void array_delete(int *arr, int *length, int index)
{
    arr[index] = 0;
    for (int *i = arr + index; i < arr + *length; i++)
    {
        *i = *(i + 1);
    }
    *length -= 1;
    realloc(arr, *length);
}
void array_sort(int *arr, int length)
{
    for (int *i = arr; i < arr + length; i++)
    {
        for (int *j = i + 1; j < arr + length; j++)
        {
            if (*i > *j)
            {
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}