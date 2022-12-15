/*

Project: Lab10_problem_02
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Creating functions
bool is_prime_number(int number);
bool is_square_number(int number);
bool is_symmetry_number(int number);
bool is_sum_each_element_of_number_multiple_of_3(int number);
void slove_5_1(int *arr, int n);
void slove_5_2(int *arr, int n);
void slove_5_3(int *arr, int n);
void slove_5_4(int *arr, int n);
void slove_5_5(int *arr, int n);

// Creating variables

// Main
int main()
{
    int n;
    printf("Value of n: ");
    scanf("%d", &n);
    int arr[n];
    slove_5_1(arr, n);
    slove_5_2(arr, n);
    slove_5_3(arr, n);
    slove_5_4(arr, n);
    slove_5_5(arr, n);

    return 1;
}

bool is_prime_number(int number)
{
    if (number == 0)
        return false;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool is_square_number(int number)
{
    if (number == 0)
    {
        return false;
    }
    return number == pow(round(sqrt(number)), 2) ? true : false;
}
bool is_symmetry_number(int number)
{
    int temp_1 = number;
    int length_number = 0;

    while (temp_1 != 0)
    {
        length_number++;
        temp_1 /= 10;
    }

    if (length_number < 2)
    {
        return false;
    }

    int temp_2 = number;
    int temp_3 = number;
    int pos_get = 0;

    while (temp_2 != 0)
    {
        int left;
        int right = temp_2 % 10;
        temp_2 /= 10;
        int temp_3 = number;
        int pos_now = 0;
        while (pos_get != length_number - pos_now)
        {
            left = temp_3 % 10;
            temp_3 /= 10;
            pos_now++;
        }
        if (left != right)
        {
            return false;
        }
        pos_get++;
    }
    return true;
}
bool is_sum_each_element_of_number_multiple_of_3(int number)
{
    int sum = 0;
    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }
    if (sum == 0)
        return false;
    return sum % 3 == 0 ? true : false;
}

void slove_5_1(int *arr, int length)
{
    printf("\n----- 5.1 -----\n");
    for (int *i = arr; i < arr + length; i++)
    {
        *i = rand() % (length + 1);
        printf("%d ", *i);
    }
}
void slove_5_2(int *arr, int n)
{
    printf("\n----- 5.2 -----\n");
    int index = 0;
    for (int *i = arr; i < arr + n; i++)
    {
        if (is_prime_number(*i))
        {
            printf("%d ", *i);
            index++;
        }
        if (index == 10)
        {
            printf("\n");
            index = 0;
        }
    }
}
void slove_5_3(int *arr, int n)
{
    printf("\n----- 5.3 -----\n");
    int sum;
    for (int *i = arr; i < arr + n; i++)
    {
        if (is_square_number(*i))
        {
            // printf("%d is square number\n", *i);
            sum += *i;
        }
    }
    printf("Sum of all square number in array: %d", sum);
}
void slove_5_4(int *arr, int n)
{
    printf("\n----- 5.4 -----\n");
    int count = 0;
    for (int *i = arr; i < arr + n; i++)
    {
        if (is_symmetry_number(*i))
        {
            count++;
        }
    }
    printf("The array have %d symmetry number", count);
}
void slove_5_5(int *arr, int n)
{
    printf("\n----- 5.5 -----\n");
    float sum;
    int count = 0;
    for (int *i = arr; i < arr + n; i++)
    {
        if (is_sum_each_element_of_number_multiple_of_3(*i))
        {
            // printf("See it's %d \n", *i);
            sum += *i;
            count++;
        }
    }
    printf("Sum multiple 3: %.2f", sum / count);
}