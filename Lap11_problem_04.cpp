/*

Project: Lab10_problem_4
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>

// Creating functions
int longest_increasing_subsequence(int *arr_base, int length, int arr_result[][3]);
void show_subsequence(int *arr_base, int start, int end);
// Creating variables
int n;

// Main
int main()
{
    printf("Value of n: ");
    scanf("%d", &n);

    int array_int[n];
    int result[n][3];
    // result[1][1] : index start
    // result[1][2] : index end
    // result[1][1] : time
    printf("Enter value for element\n");

    for (int *i = array_int; i < array_int + n; i++)
    {
        printf("Value of element: ");
        scanf("%d", &*i);
    }

    for (int *i = array_int; i < array_int + n; i++)
    {
        printf("%d ", *i);
    }
    printf("\n\n");

    int length_result = longest_increasing_subsequence(array_int, n, result);

    for (int i = 0; i < length_result; i++)
    {
        show_subsequence(array_int,result[i][0], result[i][1]);
        printf("\n");
    }
    // for (int i = 0; i < length_result; i++)
    // {
    //     printf("start: %d\n", result[i][0]);
    //     printf("end: %d\n", result[i][1]);
    //     printf("time: %d\n", result[i][2]);
    // }

    return 1;
}

int longest_increasing_subsequence(int *arr_base, int length, int arr_result[][3])
{
    bool is_start = false;
    int count = 1;
    int index = 0;
    int size = 0;
    for (int i = 0; i < length; i++)
    {
        if (!is_start)
        {
            arr_result[index][0] = i; // index start
            is_start = true;
        }

        if (arr_base[i] < arr_base[i + 1] && i + 1 != length)
        {
            count++;
        }
        else
        {
            arr_result[index][1] = i;     // index end
            arr_result[index][2] = count; // index end
            is_start = false;
            size++;
            count = 1;
            index++;
        }
    }
    return size;
}
void show_subsequence(int *arr_base, int start, int end)
{
    for (int i = start; i <= end; i ++)
    {
        printf("%d ", arr_base[i]);
    }
}