/*

Project: Bai0033
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: show factorial

Solution:

Date: 11/11/2022

*/

// Include
#include <stdio.h>

// Creating variables
int n;
bool is_datatype = true;

// Main
int main()
{

    // Input n
    printf("Value of n: ");
    scanf("%d", &n);

    if (n <= 0 || n > 9)
    {
        is_datatype = false;
    }

    if (is_datatype)
    {
        for (int i = 1; i <= 9; i++)
        {
            for (int j = 0; j <= 9; j++)
            {
                if (i + j == n)
                {
                    printf("%d %d \n", i, j);
                }
            }
        }
    }

    return 1;
}