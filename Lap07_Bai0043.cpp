/*

Project: Lap07_Bai0043
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 19/11/2022

*/

// Include
#include <stdio.h>

// Creating functions
long get_factorial(int n);

// Creating variables
int k;
int n;
float result;
bool is_datatype = true;

// Main
int main()
{

    printf("Enter value of k: ");
    scanf("%d", &k);
    printf("Enter value of n: ");
    scanf("%d", &n);

    if (n < k)
    {
        is_datatype = false;
    }

    if (is_datatype)
    {

        result = get_factorial(n) / (get_factorial(k) * get_factorial(n - k));

        printf("result: %.0f", result);
    }
    else
    {
        printf("co' biet' lam` toan' khong ?");
    }

    return 1;
}

long get_factorial(int n)
{

    long result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}