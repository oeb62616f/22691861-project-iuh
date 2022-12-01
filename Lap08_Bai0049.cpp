/*

Project: Lab08_Bai0049.cpp
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <math.h>

// Creating functions
double get_length_vector(double a1, double b1, double a2, double b2);
int get_relative_position(double a, double b, double radius);
void show_relative_position(int relative);

// Creating variables
double a;
double b;
double radius;
bool is_datatype = true;

// Main
int main()
{

    printf("Enter coordinate of anypoint: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter value of radius: ");
    scanf("%lf", &radius);
    show_relative_position(get_relative_position(a,b,radius));

    return 1;
}

double get_length_vector(double a1, double b1, double a2, double b2)
{
    double length = sqrt(pow(a1 - a2, 2) + pow(b1 - b2, 2));
    return length;
}

int get_relative_position(double a, double b, double radius)
{

    int result;
    double length = get_length_vector(a, b, 0, 0);

    if (length < radius)
    {
        result = 1;
    }
    else if (length == radius)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }

    return result;
}

void show_relative_position(int relative)
{
    if (relative == 1)
    {
        printf("The point is in the circle");
    }
    else if (relative == 0)
    {
        printf("The point is on the circle");
    }
    else
    {
        printf("The point is out of the circle");
    }
}
