/*

Project: Lap07_Bai0035
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 19/11/2022

*/

// Include
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Creating variables
char key_input[2] = "";
int number_of_letters;
int number_of_digits;
int number_of_others;
bool is_digit;
bool is_letter;
bool is_other;
bool is_continue = true;

// Main
int main()
{

    while (is_continue)
    {

        printf("Press anykey to continue:\n");
        scanf("%s", &key_input);
        
        if (key_input[0] == '1' && key_input[1] == '0')
        {
            is_continue = false;
        }

        key_input[0] = toupper(key_input[0]);
        is_digit = (key_input[0] >= '0' && key_input[0] <= '9');
        is_letter = (key_input[0] >= 'A' && key_input[0] <= 'Z');
        is_letter = ((!is_digit) && (!is_letter));

        if (is_digit)
        {
            number_of_digits++;
        }
        if (is_letter)
        {
            number_of_letters++;
        }
        if (is_other)
        {
            number_of_others++;
        }
    }

    printf("Number of digits: %d\n", number_of_digits);
    printf("Number of letters: %d\n", number_of_letters);
    printf("Number of others: %d\n", number_of_others);

    return 1;
}
