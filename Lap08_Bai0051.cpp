/*

Project: Lab08_Bai0051.cpp
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>

// Creating functions
int gcd(int a, int b);
int lcm(int a, int b);

// Creating variables
int a;
int b;
bool is_datatype = true;

// Main
int main()
{

    printf("Value of a: ");
    scanf("%d", &a);
    printf("Value of b: ");
    scanf("%d", &b);
    printf("GCD: %d\n", gcd(a,b));
    printf("LCM: %d", lcm(a,b));

    return 1;
}

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}