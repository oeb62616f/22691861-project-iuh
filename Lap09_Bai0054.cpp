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
    for (int i = 1; i <= n; i++)
    {
        if (is_hoan_hao(i))
        {
            printf("%d ", i);
        }
    }

    return 1;
}

bool is_hoan_hao(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    if (number == sum)
    {
        return true;
    }

    return false;
}
