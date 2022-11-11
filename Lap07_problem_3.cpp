/*

Project: Lab07_problem_3
    - Nguyen Gia Bao: Do all of them with the help of his teacher
;
Aim: 
    - Count:
        + vowels
        + consonants
        + other key

Solution:
    - Using do while

Date: 11/11/2022

*/

// Include
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define VALUE_ENTER 10

// Creating variables
char char_input[2] = "";
int count_vowels = 0;
int count_consonats = 0;
int count_other = 0;
bool not_press_enter = true;

// Main
int main()
{

    do
    {
        printf("Input character: \n");
        scanf("%s", &char_input);

        if (char_input[0] == '1' && char_input[1] == '0')
        {
            not_press_enter = false;
        }

        if (strupr(char_input)[0] >= 'A' && strupr(char_input)[0] <= 'Z')
        {
            if (strupr(char_input)[0] == 'A' || strupr(char_input)[0] == 'I' || strupr(char_input)[0] == 'O' || strupr(char_input)[0] == 'U' || strupr(char_input)[0] == 'E')
            {
                count_vowels++;
            }
            else
            {
                count_consonats++;
            }
        }
        else 
        {
            if (not_press_enter)
            {
            count_other++;
            }
        }
    }
    while (not_press_enter);

    printf("Vowels: %d | Consonats: %d | other: %d", count_vowels, count_consonats, count_other);



    return 1;
}
