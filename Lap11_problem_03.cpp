/*

Project: Lab10_problem_03
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>

// Creating functions

// Creating variables
int n;
int number_student_pass;
// Main
int main()
{
    printf("How many student need to enter their mark: ");
    scanf("%d", &n);

    float array_base[n];
    for (float *i = array_base; i < array_base + n; i++)
    {
        printf("Mark of student: ");
        scanf("%f", &*i);
        if (*i >= 4)
        {
            number_student_pass++;
        }
    }
    float array_pass[number_student_pass];
    float array_failed[n - number_student_pass];
    float *ptr_pass = array_pass;
    float *ptr_failed = array_failed;
    for (float *i = array_base; i < array_base + n; i++)
    {
        if (*i >= 4)
        {
            *ptr_pass++ = *i;
        }
        else
        {
            *ptr_failed++ = *i;
        }
    }

    printf("\nPASS\n");
    for (float *i = array_pass; i < array_pass + number_student_pass; i++)
    {
        printf("%.2f ", *i);
    }

    printf("\nFAILED\n");
    for (float *i = array_failed; i < array_failed + n - number_student_pass; i++)
    {
        printf("%.2f ", *i);
    }
    return 1;
}