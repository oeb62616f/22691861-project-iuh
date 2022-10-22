/*

Project: Prime Number 
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: show "Prime Number" in range number input

Solution:

Date: 19/10/2022

*/

// Include 
#include <stdio.h>
#include <conio.h>

// Creating functions
int prime_number_check(int number);

// Creating variables
int number_input;

// Main
int main()
{

    printf("Enter value of n: ");
    scanf("%d", &number_input);

    // if (prime_number_check(number_input) != -1)
    // {
    //     printf("true");
    // }
    // else printf("false");

    printf("Cac so nguyen to nho hon %d:\n", number_input);
    for (int i = 3; i < number_input; i++)
    {
        int result = prime_number_check(i);
        if (result != -1)
        {
            printf("%d\n", i);
        }
    }



    return 1;
}



int prime_number_check(int number)
{

    if (number < 2)
    {
        return -1;
    }

    if (number == 2 )
    {
        return 2;
    }


    int result;
    bool is_prime_number = true;
    for (int j = 2; j <= number / 2; j++)
    {
        if (number % j == 0)
        {
            is_prime_number == false;
            return -1;
        }
    }

    return result;
   

    
}


