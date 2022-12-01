/*

Project: Lab07_problem_2
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: sum n element

Solution:
    - Using do while

Date: 23/07/2004

*/

// Include 
#include <stdio.h>

// Creating variables
long element = 0;
long sum = 0;
int count = 0;
int n;

// Main
int main()
{

    printf("How many element to sum: ");
    scanf("%d", &n);

    do
    {
        count++;
        printf("Element %d: ", count);
        scanf("%li", &element);
        if (element > 0)
        {
            sum += element;
        }
    }
    while(count != n);

    printf("Sum of %d element: %li", n, sum);

    return 1;
}
