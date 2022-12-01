/*

Project: Lap08_problem04
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 30/11/2022

*/

// Include
#include <stdio.h>
#include <math.h>

// Creating functions
double get_length(double a1, double b1);
double get_area_triangle(double a, double b, double c);
bool is_straight_line(double a1, double b1, double a2, double b2);
void function_1();
void function_2();

// Creating variables
double a1;
double b1;
double c1;
double a2;
double b2;
double c2;
double length_side_1;
double length_side_2;
double length_side_3;

// Main
int main()
{
    function_2();
    return 1;
}

double get_length(double a1, double b1)
{
    double length = sqrt(pow(a1, 2) + pow(b1, 2));
    return length;
}

double get_area_triangle(double a, double b, double c)
{
    double perimeter = (a + b + c) / 2;
    double area = sqrt(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c));
    return area;
}

bool is_straight_line(double a1, double b1, double a2, double b2)
{
    bool result = ((a1 / a2) == (b1 / b2));
    return result;
}

void function_1()
{
    printf("Coordinate of A: ");
    scanf("%lf %lf", &a1, &b1);
    printf("Coordinate of B: ");
    scanf("%lf %lf", &a2, &b2);
    printf("Length of AB: %lf", get_length(a1 - a2, b1 - b2));
}
void function_2()
{
    printf("Coordinate of A: ");
    scanf("%lf %lf", &a1, &a2);
    printf("Coordinate of B: ");
    scanf("%lf %lf", &b1, &b2);
    printf("Coordinate of C: ");
    scanf("%lf %lf", &c1, &c2);
    length_side_1 = get_length(a1 - b1, a2 - b2);
    length_side_2 = get_length(a1 - c1, a2 - c2);
    length_side_3 = get_length(b1 - c1, b2 - c2);

    if (is_straight_line(a1 - b1, a2 - b2, a1 - c1, a2 - c2))
    {
        printf("Area of triangle: 0");
    }
    else
    {
        printf("Area of triangle: %lf", get_area_triangle(length_side_1, length_side_2, length_side_3));
    }
}