/*

Project: Lab11_Bai0071
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Includes
#include <stdio.h>

// Creating defines

// Creating functions
bool is_increasing(int digits);

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
        printf("Value of element %d: ", i);
        scanf("%d", &array_int[i]);
        count += is_increasing(array_int[i]) ? 1 : 0;
    }
    printf("YCBT <=> %d", count);
    return 1;
}

bool is_increasing(int digits)
{
    int count = 0;
    int digit_before = 10;
    while (digits != 0)
    {
        int digit = digits % 10;
        if (digit_before >= digit)
        {
            digit_before = digit;
        }
        else
        {
            return false;
        }
        digits /= 10;
        count++;
    }
    return count == 3 ? true : false;
}