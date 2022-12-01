/*

Project: Lap08_problem01
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 30/11/2022

*/

// Include
#include <stdio.h>
#include <math.h>

// Creating function
void get_input(double *base, double *explosion);
double get_pow(double base, double explosion);
double byte_to_bit(int byte, bool singed);

// Creating variables
double base;
double explosion;

// Main
int main()
{

    // 1.1
    get_input(&base, &explosion);
    printf("Pow: %lf  \n", get_pow(base, explosion));

    // 1.2
    printf("Range of int: %lf ... %lf\n", -get_pow(2, byte_to_bit(sizeof(int), false)), get_pow(2, byte_to_bit(sizeof(int), false)) - 1);
    printf("Range of int: %lf ... %lf\n", 0, get_pow(2, byte_to_bit(sizeof(unsigned int), true)) - 1);

    // 1.3
    printf("Char            || %d      || %.0lf ... %.0lf\n", sizeof(char), -get_pow(2, byte_to_bit(sizeof(char), false)), get_pow(2, byte_to_bit(sizeof(char), false)) - 1);
    printf("Unsigned char   || %d      || %.0lf ... %.0lf\n", sizeof(unsigned char), 0, get_pow(2, byte_to_bit(sizeof(unsigned char), true)));
    printf("int             || %d      || %.0lf ... %.0lf\n", sizeof(int), -get_pow(2, byte_to_bit(sizeof(int), false)), get_pow(2, byte_to_bit(sizeof(int), false)) - 1);
    printf("Unsigned int    || %d      || %.0lf ... %.0lf\n", sizeof(unsigned int), 0, get_pow(2, byte_to_bit(sizeof(unsigned int), true)));

    return 1;
}

void get_input(double *base, double *explosion)
{
    printf("Base: ");
    scanf("%lf", &*base);
    printf("Explosion: ");
    scanf("%lf", &*explosion);
}

double get_pow(double base, double explosion)
{
    return pow(base, explosion);
}

double byte_to_bit(int byte, bool singed)
{

    int bit;

    if (singed)
    {
        bit = byte * 8;
    }
    else
    {
        bit = byte * 8 - 1;
    }

    return bit;
}