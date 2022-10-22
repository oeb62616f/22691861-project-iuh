/*

Project: Credit
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: Calculating mark base on Thang điểm 4

Solution:

Date: 18/10/2022

*/

// Include  
#include <stdio.h>
#include <conio.h>

// Creating variables
float mark_input;
float mark_coverted;
// Main
int main()
{
    
    // Input
    printf("Enter your mark for convert: ");
    scanf("%f", &mark_input);

    if (mark_input < 0 || mark_input > 10)
    {
        printf("You suck");
    }
    else
    {

        mark_coverted = mark_input / 2.5;
        printf("Diem theo thang 4 la %.2f - Diem ", mark_coverted);
        if (mark_coverted == 4)
        {
            printf("A");
        }
        else if (mark_coverted < 4 && mark_coverted >= 3.5)
        {
            printf("B+");
        }
        else if (mark_coverted < 3.5 && mark_coverted >= 3)
        {
            printf("B");
        }
        else if (mark_coverted < 3 && mark_coverted >= 2.5)
        {
            printf("C+");
        }
        else if (mark_coverted < 2.5 && mark_coverted >= 2)
        {
            printf("C");
        }
        else if (mark_coverted < 2 && mark_coverted >= 1.5)
        {
            printf("D+");
        }
        else if (mark_coverted < 1.5 && mark_coverted >= 1)
        {
            printf("D");
        }
        else
        {
            printf("F");
        }

    }



    return 1;
}
