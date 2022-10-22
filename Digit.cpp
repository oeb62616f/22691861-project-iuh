/*

Project: Digit 
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: show digit pronunciation

Solution: 
    - using switch case
    - using if else

Date: 18/10/2022

*/

// Include 
#include <stdio.h>
#include <conio.h>

// Creating variables
int digit_input;

// Main
int main()
{

    // Input
    printf("Digit: ");
    scanf("%d", &digit_input);



    printf("Chu so ");
    switch (digit_input)
    {
    case 0:
        printf("khong");
        break;
    case 1:
        printf("mot");
        break;
    case 2:
        printf("hai");
        break;
    case 3:
        printf("ba");
        break;
    case 4:
        printf("bon");
        break;
    case 5:
        printf("nam");
        break;
    case 6:
        printf("sau");
        break;
    case 7:
        printf("bay");
        break;
    case 8:
        printf("tam");
        break;
    case 9:
        printf("chin");
        break;
    default:
        printf("Out of range");
        break;
    }



    return 1;

}