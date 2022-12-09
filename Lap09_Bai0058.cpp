/*

Project: Lab09_Bai0057
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <math.h>

// Creating functions
double get_pow(double base, double explosion);
double get_factorial(int n);
double get_pow_e(float x, float e);

// Creating variables
double x;
double e;

// Main
int main()
{

    printf("Value of x: ");
    scanf("%lf", &x);
    printf("Value of e: ");
    scanf("%lf", &e);

    printf("Sin: %lf\n", get_pow_e(x,e));
    printf("Sin: %lf", exp(x));

    return 1;
}

double get_pow(double base, double explosion)
{
    return pow(base, explosion);
}
double get_factorial(int n)
{
    double result = 1;
    for (double i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
double get_pow_e(float x, float e)
{
    double index = 0;
    double pow_e_x = 0;
    bool is_stop = false;
    while (!is_stop)
    {
        double temp = get_pow(x,index) / get_factorial(index);
        pow_e_x += temp;
        is_stop = abs(temp) < e;
        index++;
    }
    return pow_e_x;
}