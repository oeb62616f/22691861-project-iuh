/*

Project: Lap_No6 problem 
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:

Date: 30/10/2022

*/

// Include
#include <stdio.h>
#include <conio.h>

// Creating variables
long money_withdraw;
int c_50;
int c_100;
int c_200;
int c_500;
int n = 0;

// Main
int main()
{

    printf("nhap so tien rut: ");
    scanf("%li", &money_withdraw);

    c_500 = money_withdraw / 500000;
    c_200 = (money_withdraw - c_500 * 500000) / 200000;
    c_100 = (money_withdraw - c_500 * 500000 - c_200 * 200000) / 100000;
    c_50 = (money_withdraw - c_500 * 500000 - c_200 * 200000 - c_100 * 100000) / 50000;

    printf("Phuong an toi uu: %d to 50000 | %d to 100000 | %d to 200000 | %d to 500000", c_50, c_100, c_200, c_500);

    return 1;
}