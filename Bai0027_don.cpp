/*

Project: Bai0027 Don
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: number pronunciation

Solution:

Date: 28/10/2022

*/

// Include 
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h>

// Creating functions
void number_pronunciation(char number, int pos, int length);

// Creating variables
int length_number;
int ind = 0;
char numbers_input[5];
int number_of_food;

bool is_datatype = true;
bool is_none_of_donvi_chuc_tram = false;
bool is_exist_don_vi = false;



// Main
int main()
{

    // input number_of_food
    printf("So luong mon an: ");
    scanf("%d", &number_of_food);
    int price;
    int amount;
    for (int i = 1; i <= number_of_food; i++)
    {
        printf("Don gia: ");
        scanf("%d", &price);
        printf("So luong: ");
        scanf("%d", &amount);
        long int total_price = price * amount;

        itoa(total_price,numbers_input,10);
        is_none_of_donvi_chuc_tram = (numbers_input[2] == '0' && numbers_input[3] == '0' && numbers_input[4] == '0');
        is_exist_don_vi = (numbers_input[3] == '0' && numbers_input[4] != 0);

        length_number = strlen(numbers_input); 
        for(int i = 0; i <= strlen(numbers_input); i++)
        {
            number_pronunciation(numbers_input[i], i, length_number);
        }
        printf("\n");
    }

    return 1;
}

void number_pronunciation(char number, int pos, int length)
{
    switch (number)
    {
    case '0':
        if(length - pos == 3 && pos != length)
        {
            if (!is_none_of_donvi_chuc_tram)
            {
                printf("Khong ");
            }
        }
        break;
    case '1':
        if(pos == 0 || pos == 3)
        {
            printf("Muoi ");
        }
        else
        {
            printf("Mot ");
        }
        
        break;
    case '2':
        printf("Hai ");
        break;
    case '3':
        printf("Ba ");
        break;
    case '4':
        printf("Bon ");
        break;
    case '5':
        printf("Nam ");
        break;
    case '6':
        printf("Sau ");
        break;
    case '7':
        printf("Bay ");
        break;
    case '8':
        printf("Tam ");
        break;
    case '9':
        printf("Chin ");
        break;
    }


    
    switch (length - pos)
    {
    case 1:// donvi
         
        
        break;
    case 2:// chuc
        if(is_exist_don_vi)
        {
            printf("Le ");
        }
        else
        {
            if (number != '1' &&  number != '0')
            {
                printf("Muoi ");
            }
        }
        break;
    case 3:// tram
        if (!is_none_of_donvi_chuc_tram)
        {
            printf("Tram ");
        }
        
        
        
        break;
    case 4:// ngan
        printf("Ngan ");
        
        break;
    case 5:// chuc ngan
        if(number != '1')
        {
            printf("Muoi "); 
        }
        
        break;
    
    default:
        break;
    }




}