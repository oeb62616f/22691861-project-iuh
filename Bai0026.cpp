/*

Project: Bai0026
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: show day before and day later

Solution:

Date: 27/10/2022

*/

// Include 
#include <stdio.h>
#include <conio.h>

// Creating functions
int get_day_of_month(int month,bool is_nam_nhuan);

// Creating variables
int day_base;
int month_base;
int year_base;
int day_after;
int month_after;
int year_after;
int day_before;
int month_before;
int year_before;

bool datatype = true;
bool is_nam_nhuan;

// Main
int main()
{
    // Input day - day
    printf("day: ");
    scanf("%d", &day_base);
    // Input month - month
    printf("month: ");
    scanf("%d", &month_base);
    // Input year - year
    printf("year: ");
    scanf("%d", &year_base);

    is_nam_nhuan = ((year_base % 4 == 0 && year_base % 100 != 0) || (year_base % 400 == 0));
    if(day_base < 0 || month_base < 0 || month_base > 12 || year_base < 0 || day_base > get_day_of_month(month_base,is_nam_nhuan))
    {
        datatype = false;
    }
    




    if(datatype)
    {

        // day before
        day_before = day_base - 1;
        month_before = month_base;
        year_before = year_base;
        if(day_before == 0)
        {
            month_before -= 1;
            day_before = get_day_of_month(month_before,is_nam_nhuan);
            if(month_before == 0)
            {
                month_before = 12;
                year_before -= 1;
            }
        }
        printf("%d / %d / %d",day_before,month_before,year_before);

        // day after
        day_after = day_base + 1;
        month_after = month_base;
        year_after = year_base;
        if(day_after == get_day_of_month(month_base,is_nam_nhuan) + 1)
        {
            day_after = 1;
            month_after++;
            if(month_after == 13)
            {
                month_after = 1;
                year_after++;
            }
        }
        printf("%d / %d / %d",day_after,month_after,year_after);
    }
    return 1;
}

int get_day_of_month(int month,bool is_nam_nhuan)
{
    int day;
    if(month == 0)
    {
        month = 12;
    }
    switch (month)
    {
    case 1:
        day = 31;
        break;
    case 2:
        if(is_nam_nhuan)
        {
            day = 29;
        }
        else
        {
            day = 28;
        }
        break;
    case 3:
        day = 31;
        break;
    case 4:
        day = 30;
        break;
    case 5:
        day = 31;
        break;
    case 6:
        day = 30;
        break;
    case 7:
        day = 31;
        break;
    case 8:
        day = 31;
        break;
    case 9:
        day = 30;
        break;
    case 10:
        day = 31;
        break;
    case 11:
        day = 30;
        break;
    case 12:
        day = 31;
        break;
       
    }


    return day;
}