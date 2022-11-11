/*

Project: Bai0029
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: show factorial

Solution:

Date: 11/11/2022

*/

// Include
#include <stdio.h>

// Creating variables
int n;
long mul = 1;
bool is_datatype = true;

// Main
int main()
{

    // Input n
    printf("Value of n to calculating factorial: ");
    scanf("%d", &n);

    if (n < 0)
    {
        is_datatype = false;
    }

    if (is_datatype)
    {
        for (int i = 1; i <= n; i++)
        {
            mul *= i;
        }
    }

    printf("reslut: %li", mul);

    return 1;
}