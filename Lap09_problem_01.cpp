/*

Project: Lab09_problem_01
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>

// Creating functions
double get_bmi(double weight, double height);
void status_body(double bmi);

// Creating variables
double height;
double weight;
double bmi;

// Main
int main()
{
    printf("Enter your weight: ");
    scanf("%lf", &weight);
    printf("Enter your height: ");
    scanf("%lf", &height);

    status_body(get_bmi(weight,height));

    return 1;
}

double get_bmi(double weight, double height)
{
    return weight / (height * height);
}
void status_body(double bmi)
{
    if (bmi < 18.5)
    {
        printf("Thieu can");
    }
    else if (bmi < 23)
    {
        printf("Binh thuong");
    }
    else if (bmi < 25)
    {
        printf("Thua can");
    }
    else
    {
        printf("Beo phi");
    }
}