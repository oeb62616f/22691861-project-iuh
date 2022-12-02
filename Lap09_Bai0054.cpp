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

bool is_hoan_hao(int n)
{
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum == n ? true : false;
}
