/*

Project: Credit
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: Show day of month of year

Solution:

Date: 28/10/2022

*/

// Include 
#include <stdio.h>
#include <conio.h> 

// Creating variables
int day;
int month;
int year;
bool is_leap_year = false;
// Main
int main()
{

    // Input
        // Input month
    printf("Month: ");
    scanf("%d", &month);
    printf("Year: ");
    scanf("%d", &year);
    
    is_leap_year = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        day = 31;
        printf("Thang %d cua nam %d co %d ngay", month, year, day);
        break;
    case 4: case 6: case 9: case 11:
        day = 30;
        printf("Thang %d cua nam %d co %d ngay", month, year, day);
        break;
    case 2:
        if(is_leap_year)
        {
            day = 29;
        }
        else
        {
            day = 28;
        }
        printf("Thang %d cua nam %d co %d ngay", month, year, day);
        break;
    default:
        printf("Khong hop le");
        break;
    }
    


    return 1;
}