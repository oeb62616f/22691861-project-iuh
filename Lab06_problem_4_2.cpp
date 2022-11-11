/*

Project: Lap_No6 problem 4
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

    printf("nhap so to 50000 gioi han: ");
    scanf("%d", &c_50);
    printf("nhap so to 100000 gioi han: ");
    scanf("%d", &c_100);
    printf("nhap so to 200000 gioi han: ");
    scanf("%d", &c_200);
    printf("nhap so to 500000 gioi han: ");
    scanf("%d", &c_500);


    for (int wd_50 = 0; wd_50 <= c_50; wd_50++)
        for (int wd_100 = 0; wd_100 <= c_100; wd_100++)
            for (int wd_200 = 0; wd_200 <= c_200; wd_200++)
                for (int wd_500 = 0; wd_500 <= c_500; wd_500++)
                {
                    if (wd_50 * 50000 + wd_100 * 100000 + wd_200 * 200000 + wd_500 * 500000 == money_withdraw)
                    {
                        n++;
                        printf("Phuong an %d: %d to 50000 | %d to 100000 | %d to 200000 | %d to 500000\n", n, wd_50, wd_100, wd_200, wd_500);
                    }
                }

    return 1;
}