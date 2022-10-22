/*

Project: Number
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: Show pronunciation for any number in range 10 - 99

Solution:

Date: 19/10/2022

*/

// Include
#include <stdio.h>
#include <conio.h>

// Creating functions
void pronunciation_number(int a);

// Creating variables
int donvi;
int chuc;
int number_input;

// Main
int main()
{

    printf("Enter value of number: ");
    scanf("%d", &number_input);

    if (number_input < 10 || number_input > 99)
    {
        printf("Out of range");
    }
    else if (number_input == 10)
    {
        printf("Muoi");
    }
    else 
    {
        donvi = number_input % 10;
        chuc = (number_input / 10) % 10;

        if (chuc  ==  1)
        {
            printf("Muoi ");
            pronunciation_number(donvi);
        }
        else if (chuc > 1)
        {
            pronunciation_number(chuc);
            if (donvi == 0)
            {
                pronunciation_number(donvi);
            }
            else
            {   
                printf("Muoi ");
                pronunciation_number(donvi);
            }
        }

    }

    return 1;
}

void pronunciation_number(int number)
{
    switch (number)
    {
    case 0:
        printf("Muoi ");
        break;
    case 1:
        printf("Mot ");
        break;
    case 2:
        printf("Hai ");
        break;
    case 3:
        printf("Ba ");
        break;
    case 4:
        printf("Bon ");
        break;
    case 5:
        printf("Nam ");
        break;
    case 6:
        printf("Sau ");
        break;
    case 7:
        printf("Bay ");
        break;
    case 8:
        printf("Tam ");
        break;
    case 9:
        printf("Chin ");
        break;
    }
}



