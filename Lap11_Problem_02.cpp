/*

Project: Lab11_Problem_02
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <stdlib.h>

// Creating functions
void array_sort(int *arr, int length);
void array_merge(int *arr_base, int *arr_add, int length_base, int length_add);
void array_insert(int *arr, int length, int index, int value);
int search(int *arr, int length, int value);

// Creating variables
int length_array_1;
int length_array_2;

// Main
int main()
{
    printf("Value of length array 1: ");
    scanf("%d", &length_array_1);
    printf("Value of length array 2: ");
    scanf("%d", &length_array_2);
    int array_1[length_array_1];
    int array_2[length_array_2];
    int array_3[length_array_1 + length_array_2];
    int index;
    for (int *i = array_1; i < array_1 + length_array_1; i++)
    {
        printf("Value of A[%d]: ", index + 1);
        scanf("%d", &*i);
        index++;
    }
    index = 0;
    for (int *i = array_2; i < array_2 + length_array_2; i++)
    {
        printf("Value of B[%d]: ", index + 1);
        scanf("%d", &*i);
        index++;
    }

    array_sort(array_1, length_array_1);
    array_sort(array_2, length_array_2);
    for (int i = 0; i < length_array_1; i++)
    {
        array_3[i] = array_1[i];
    }
    array_merge(array_3, array_2, length_array_1, length_array_2);
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        array_3[i] = array_1[i];
    }
    array_merge(array_3, array_2, length_array_1, length_array_2);

    for (int *i = array_3; i < array_3 + length_array_1 + length_array_2; i++)
    {
        printf("%d ", *i);
    }
    return 1;
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

void array_merge(int *arr_base, int *arr_add, int length_base, int length_add)
{
    int index = 0;
    for (int *i = arr_add; i < arr_add + length_add; i++)
    {
        if (search(arr_base, length_base + index, *i) != -1)
        {
            array_insert(arr_base, length_base + index, search(arr_base, length_base + index, *i), *i);
        }
        index++;
    }
}

void array_insert(int *arr, int length, int index, int value)
{
    if (index < length)
    {
        length += 1;  
        for (int *i = arr + length; i > arr + index; i--)
        {
            *i = *(i - 1);
        }
        arr[index] = value;
    }
    else
    {
        arr[index] = value;
    }
}

int search(int *arr, int length, int value)
{
    int index = 0;
    for (int *i = arr; i < arr + length; i++)
    {
        if (*i >= value)
        {
            return index;
        }
        index++;
    }
    return index;
}