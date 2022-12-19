/*

Project: Lab11_Bai0072
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Includes
#include <stdio.h>

// Creating defines

// Creating functions
bool is_3_digits_and_even_number_each_digit(int digits);

// Creating variables
int n;
int count;
// Main
int main()
{
    printf("How many element of array: ");
    scanf("%d", &n);
    int array_int[n];
    for (int i = 0; i < n; i++)
    {
        printf("Value of element %d: ", i + 1);
        scanf("%d", &array_int[i]);
        if (is_3_digits_and_even_number_each_digit(array_int[i]))
        {
            count++;
        }
        // printf("%d ", *i);
    }
    printf("\nYCBT <=> %d", count);
    return 1;
}

bool is_3_digits_and_even_number_each_digit(int digits)
{
    int count = 0;
    int digit;
    while (digits != 0)
    {
        digit = digits % 10;
        if (!(digit % 2 == 0))
        {
            return false;
        }
        count++;
        digits /= 10;
    }
    return count == 3 ? true : false;
}