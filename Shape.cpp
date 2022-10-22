/*

Project: Shape 
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: Calculate random area shape:
        + Rectangle
        + Triangle
        + Circle

Solution:
    - While user choosing what shape is calculate:
        1. Triangle:
            - Get the lengthes of three side of tritangle
            - is_triangle
            - area_triangle
        2. Rectangle
            - area_rectangle
        3. Circle
            - area_circle
        4. Exit

Date: 18/10/2022

*/

// Include
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Creating functions
void triangle(float a, float b, float c,bool *is_triangle,float *area_triangle);
float rectangle(float a, float b);
float circle(float radius);

// Creating variables
int shape_chose = -1;
bool is_triangle;
bool is_exit = false;
float area_triangle;
float area_rectangle;
float area_circle;
float a;
float b;
float c;
float radius;



// Main
int main()
{
    
    while (is_exit == false)
    {

        // choosing shape or exit
        while (shape_chose > 4 || shape_chose < 0 )
        {
            printf("Chuong trinh tinh dien tich cac hinh co ban:\n");
            printf("\t1. Hinh tam giac\n");
            printf("\t2. Hinh chu nhat\n");
            printf("\t3. Hinh tron\n");
            printf("\t4. Thoat\n");
            printf("Hay nhap mot so de chon hinh can tinh (1, 2, 3, hoac 4): ");
            scanf("%d", &shape_chose);
        }

        // Show result 
        switch (shape_chose)
        {
        case 1:
            printf("Enter value for side a of triangle: ");
            scanf("%f", &a);
            printf("Enter value for side b of triangle: ");
            scanf("%f", &b);
            printf("Enter value for side c of triangle: ");
            scanf("%f", &c);
            triangle(a, b, c, &is_triangle, &area_triangle);
            if (is_triangle == true)
            {
                printf("Area of triangle: %.2f\n", area_triangle);
            }
            else
            {
                printf("triangle doesn't exist\n");
            }
            break;
        case 2:
            printf("Enter value for width of rectangle: ");
            scanf("%f", &a);
            printf("Enter value for length of rectangle: ");
            scanf("%f", &b);
            area_rectangle = rectangle(a,b);
            printf("Area of triangle: %.2f\n", area_rectangle);
            break;
        case 3:
            printf("Enter value for radius of circle: ");
            scanf("%f", &radius);
            area_circle = circle(radius);
            printf("Area of triangle: %.2f\n", area_circle);
            break;
        }


        // Continue or stop
        if (shape_chose == 4)
        {
            is_exit = true;
        }
        else
        {
            shape_chose = -1;
        }
    }

    return 1;

}

// Calculate for triangle
void triangle(float a, float b, float c,bool *is_triangle,float *area_triangle)
{
    if ((a + b > c ) && (a + c > b ) && (c + b > a ))
    {
        *is_triangle = true;
        float p = (a + b + c) / 2;
        *area_triangle = sqrt(p*(p-a)*(p-b)*(p-c));
    }
    else 
    {
        *is_triangle = false;
    }
}

float rectangle(float a, float b)
{
    return a * b;
}

float circle(float radius)
{
    return pow(radius,2) * 3.14;
}
