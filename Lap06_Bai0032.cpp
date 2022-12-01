/*

Project: Bai0032
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: show factorial

Solution:

Date: 11/11/2022

*/

// Include
#include <stdio.h>

// Creating variables
int n;
long sum_1 = 0;
long sum_2 = 0;
long sum_3 = 0;
long sum_4 = 0;

bool is_datatype = true;

// Main
int main()
{

    // Input n
    printf("Value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum_1 += i;
        if (i % 2 == 0)
        {
            sum_2 += i;
        }
        else
        {
            sum_4 += i * i;
        }
        if (i % 3 == 0)
        {
            sum_3 += i;
        }
    }

    printf("Tong 1 - n: %li\n", sum_1);
    printf("Tong so chan: %li\n", sum_2);
    printf("Tong chia het cho 3: %li\n", sum_3);
    printf("Tong binh phuong so le: %li", sum_4);

    return 1;
}