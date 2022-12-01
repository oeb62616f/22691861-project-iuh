/*

Project: Lab08_Bai0047.cpp
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <math.h>

// Creating functions
bool is_prime(int number);

// Creating variables
int n;
bool is_datatype = true;

// Main
int main()
{

    printf("Value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }

    return 1;
}

bool is_prime(int number)
{

    bool result = true;

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            result = false;
            break;
        }
    }
    return result;
}
