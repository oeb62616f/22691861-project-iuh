/*

Project: Lab09_Bai0056
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
double get_cos(float x, float e);

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
    // x /= 180;
    printf("Cos: %lf\n", get_cos(x,e));
    printf("Cos: %lf", cos(x));

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
double get_cos(float x, float e)
{
    double index = 1;
    double cos_x = 1;
    bool is_stop = false;
    while (!is_stop)
    {
        double temp = get_pow(-1.0, index) * get_pow(x, 2 * index) / get_factorial(2 * index);
        cos_x += temp;
        is_stop = abs(temp) < e;
        index++;
    }
    return cos_x;
}