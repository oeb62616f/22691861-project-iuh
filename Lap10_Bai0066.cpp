/*

Project: Lab10_Bai0066
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <stdlib.h>

// Creating functions
void array_delete(int *arr, int *length, int index);
int search(int *arr, int length, int value);

// Creating variables
int n;
int value;
int *arr;
int index = 0;


// Main
int main()
{

    printf("Value of n: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));

    for (int *i = arr; i < arr + n; i++)
    {
        *i = rand() % 50;
        printf("%d ", *i);
    }
    printf("\nValue wanna delete: ");
    scanf("%d", &value);

    
    while (search(arr,n,value) != -1)
    {
        array_delete(arr,&n,search(arr,n,value));
    }

    for (int *i = arr; i < arr + n; i++)
    {
        printf("%d ",*i);
    }

    

    return 1;
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