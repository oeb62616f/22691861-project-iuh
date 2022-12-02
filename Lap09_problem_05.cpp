/*

Project: Lab09_problem_05
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>

// Creating functions
int sum_digits(int n);
int right_number(int n);
bool is_div_2(int n);
bool is_div_3(int n);
bool is_div_5(int n);
bool is_div_6(int n);
bool is_div_9(int n);

// Creating variables
int n;

// Main
int main()
{
    printf("Value of n: ");
    scanf("%d", &n);

    printf("Chia het    Yes / No\n");
    printf("    2           %s\n",is_div_2(n)? "Yes":"No");
    printf("    3           %s\n",is_div_3(n)? "Yes":"No");
    printf("    5           %s\n",is_div_5(n)? "Yes":"No");
    printf("    6           %s\n",is_div_6(n)? "Yes":"No");
    printf("    9           %s\n",is_div_9(n)? "Yes":"No");
    return 1;
}

int sum_digits(int n)
{
    int sum;
    while (n != 0)
    {
        sum += right_number(n);
        n /= 10;
    }
    return sum;
}
int right_number(int n)
{
    return n % 10;
}
bool is_div_2(int n)
{
    return n % 2 == 0 ? true : false;
}
bool is_div_3(int n)
{
    return n % 3 == 0 ? true : false;
}
bool is_div_5(int n)
{
    return n % 5 == 0 ? true : false;
}
bool is_div_6(int n)
{
    return n % 6 == 0 ? true : false;
}
bool is_div_9(int n)
{
    return n % 9 == 0 ? true : false;
}