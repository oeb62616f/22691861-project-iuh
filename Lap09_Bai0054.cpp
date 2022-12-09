/*

Project: Lab09_Bai0054.cpp
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <math.h>

// Creating functions
bool is_hoan_hao(int n);

// Creating variables
int n;

// Main
int main()
{

    printf("Value of input: ");
    scanf("%d", &n);

    return 1;
}

bool is_hoan_hao(int n)
{
    int sum;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (n * 2 == sum)
    {
        return true;
    }

    return false;
}
