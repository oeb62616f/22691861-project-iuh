/*

Project: Grade
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: show "academic ability"  in terminal

Solution:

Date: 19/10/2022

*/

// Include 
#include <stdio.h> 
#include <conio.h>

// Creating variables
float score_input;

// Main
int main()
{
    // Input
    printf("Enter your score: ");
    scanf("%f", &score_input);

    // Calculate processing and showing result
    if (score_input > 10 || score_input < 0)
    {
        printf("Out of range");
    }
    else if (score_input >= 9)
    {
        printf("Gioi");
    }
    else if (score_input >= 7)
    {
        printf("Kha");
    }
    else if (score_input >= 5)
    {
        printf("Trung binh");
    }
    else if (score_input >= 4)
    {
        printf("Yeu");
    }
    else if (score_input >= 0)
    {
        printf("Kem");
    }

    return 1;

}