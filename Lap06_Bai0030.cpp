/*

Project: Bai0030
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: show factorial

Solution:

Date: 11/11/2022

*/

// Include
#include <stdio.h>

// Creating variables
long n;
bool is_datatype = true;

// Main
int main()
{

    // Input n
    printf("value of number: ");
    scanf("%li", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 1;
}