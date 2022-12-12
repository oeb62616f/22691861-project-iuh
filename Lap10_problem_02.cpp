/*

Project: Lab10_problem_2
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

// Creating variables
int n;
int element_per_row = 10;
int sum_square;
int sum_multiple_3;
float count_multiple_3;
// Main
int main()
{
    // 5.1
    printf("5.1\n");
    printf("Pls enter value of n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % (n + 1);
    }
    // 5.2
    printf("\n5.2\n");
    int j = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("%d  ", arr[i-1]);
        if (i / (element_per_row * j) == 1)
        {
            printf("\n");
            j++;
        }
    }
    // 5.3
    printf("\n5.3\n");
    for (int i = 0; i < n; i++)
    {
        if (is_square_number(arr[i]))
        {
            printf("%d is square number\n", arr[i]);
            sum_square += arr[i];
        }
    }
    printf("Sum square number in array: %d\n", sum_square);
    // 5.4
    printf("\n5.4\n");
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_symmetry_number(arr[i]))
        {
            printf("%d is symmetry number\n", arr[i]);
            count++;
        }
    }
    printf("array has %d symmetry number\n", count);
    // 5.5
    printf("\n5.5\n");
    for (int i = 0; i < n; i++)
    {
        if (is_sum_each_element_of_number_multiple_of_3(arr[i]))
        {
            printf("%d is multiple 3\n", arr[i]);
            sum_multiple_3 += arr[i];
            count_multiple_3++;
        }
    }
    printf("Average sum multiple 3: %f", sum_multiple_3 / count_multiple_3);
    return 1;
}

bool is_prime_number(int number)
{
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
    if (sum == 0) return false;
    return sum % 3 == 0 ? true : false;
}