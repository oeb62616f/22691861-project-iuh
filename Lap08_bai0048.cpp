/*

Project: Lab08_Bai0047.cpp
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>

// Creating functions
bool is_date(int day, int month, int year);
int get_day_of_month(int month, bool is_leap_year);
bool is_leap_year(int year);

// Creating variables
int day;
int month;
int year;

// Main
int main()
{
    printf("Enter value of date: ");
    scanf("%d %d %d", &day, &month, &year);
    if (is_date(day,month,year))
    {
        printf("Valid date");
    }
    else
    {
        printf("Invalid date");
    }

    return 1;
}

bool is_date(int day, int month, int year)
{

    bool result = true;

    int max_day = get_day_of_month(month,is_leap_year(year));

    if (day < 1 || day > max_day || month < 1 || month > 12)
    {
        result = false;
    }

    return result;
}

int get_day_of_month(int month, bool is_leap_year)
{

    int day;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;
    case 4:
    case 6:
    case 11:
        day = 30;
        break;
    case 2:
        day = is_leap_year ? 29 : 28;
        break;
    }

    return day;
}

bool is_leap_year(int year)
{

    bool result = ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));

    return result;
}