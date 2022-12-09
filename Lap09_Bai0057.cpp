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
double get_sin(float x, float e);

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

    printf("Sin: %lf\n", get_sin(x,e));
    printf("Sin: %lf", sin(x));

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
double get_sin(float x, float e)
{
    double index = 0;
    double sin_x = 0;
    bool is_stop = false;
    while (!is_stop)
    {
        double temp = get_pow(-1.0, index) * get_pow(x, 2 * index + 1) / get_factorial(2 * index + 1);
        sin_x += temp;
        is_stop = abs(temp) < e;
        index++;
    }
    return sin_x;
}