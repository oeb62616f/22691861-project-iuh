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
int select_option = -1;

// Main
int main()
{
    int *arr;

    while (select_option != 10)
    {
        printf("\n");
        printf("1.  Tao day so\n");
        printf("2.  Hien thi day so\n");
        printf("3.  Tim Max\n");
        printf("4.  Tim Min\n");
        printf("5.  Tim phan tu X\n");
        printf("6.  Bo sung phan tu\n");
        printf("7.  Chen phan tu vao vi tri k\n");
        printf("8.  Xoa phan tu vao vi tri k\n");
        printf("9.  Xoa phan tu thu k\n");
        printf("10. Thoat\n");
        printf("Chon chuc nang bang cach nhap tu 1 toi 10: ");
        scanf("%d", &select_option);
        switch (select_option)
        {
        case 1:
            printf("\nTao day so\n");
            printf("Value of n: ");
            scanf("%d", &n);
            arr = (int *)malloc(n * sizeof(int));
            input(arr, n);
            break;
        case 2:
            printf("\nHien thi day so\n");
            output(arr, n);
            break;
        case 3:
            int _max;
            printf("\nTim max\n");
            _max = max(arr, n);
            printf("Value bigest in array: %d", _max);
            break;
        case 4:
            int _min;
            printf("\nTim Min\n");
            _min = min(arr, n);
            printf("Value min in array: %d", _min);
            break;
        case 5:
            printf("\nTim phan tu X\n");
            int x;
            int i;
            printf("Enter value to find: ");
            scanf("%d", &x);
            i = search(arr, n, x);
            if (i != -1)
            {
                printf("Phan tu %d o vi tri %d", x, i);
            }
            else
            {
                printf("Khong co %d o trong mang", x);
            }
            break;
        case 6:
            printf("\nBo sung phan tu\n");
            int _x;
            printf("Enter value to append: ");
            scanf("%d", &_x);
            array_append(arr, &n, _x);
            break;
        case 7:
            printf("\nChen phan tu vao vi tri k\n");
            int value;
            int index;
            printf("Enter value to insert: ");
            scanf("%d", &value);
            printf("Enter value of position that you want to put into array: ");
            scanf("%d", &index);
            array_insert(arr, &n, index, value);
            break;
        case 8:
            printf("\nXoa phan tu thu k\n");
            int _index;
            printf("Enter position that you want to delete element of array: ");
            scanf("%d", &_index);
            array_delete(arr, &n, _index);
            break;
        case 9:
            array_sort(arr, n);
            break;
        case 10:
            select_option = 10;
            printf("Exits");
            break;
            // default:
            //     break;
        }

        free(arr);
        return 1;
    }
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
    int value_max = -1;
    for (int *i = arr; i < arr + length; i++)
    {
        value_max = value_max < *i ? *i : value_max;
    }
    return value_max;
}
int min(int *arr, int length)
{
    int value_min = 99999;
    for (int *i = arr; i < arr + length; i++)
    {
        value_min = value_min > *i ? *i : value_min;
    }
    return value_min;
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