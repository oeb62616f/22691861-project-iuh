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

// Creating function
long int money_change(long int money_in, int count);

// Creating variables
long withdraw_money;
int count_500 = 0;
int count_200 = 0;
int count_100 = 0;
int count_50 = 0;
int solution = 1;
int time_loop;
bool is_withdraw = true;

// Main;
int main()
{

    // Input withdraw_money
    printf("Withdraw money: ");
    scanf("%li", &withdraw_money);

    // count_50 = withdraw_money / 50000;
    // printf("Phuong an %d: %d to 50000 + %d to 100000 + %d to 200000 + %d to 500000\n", solution, count_50, count_100, count_200, count_500);

    // // // x: 50 + y: 100
    // time_loop = count_50 / 2;
    // for (int i = 0; i < time_loop; i++)
    // {
    //     solution++;
    //     count_100 += 1;
    //     count_50 -= 2;
    //     printf("Phuong an %d: %d to 50000 + %d to 100000 + %d to 200000 + %d to 500000\n", solution, count_50, count_100, count_200, count_500);
    // }

    // // // x: 100 + y: 200
    count_100 = withdraw_money / 100000;
    time_loop = count_100 / 2;
    count_200 = 0;
    count_50 = (withdraw_money - count_100 * 100000) / 50000;
    for (int i = 0; i < time_loop; i++)
    {
        solution++;
        count_200 += 1;
        count_100 -= 2;
        printf("Phuong an %d: %d to 50000 + %d to 100000 + %d to 200000 + %d to 500000\n", solution, count_50, count_100, count_200, count_500);
    }

    // // x: 100 + y: 200 + z: 500
    // time_loop = withdraw_money / 500000;
    // count_200 = withdraw_money / 200000;
    // for (int i = 0; i < time_loop; i++)
    // {
    //     solution++;
    //     if (count_100 == 0)
    //     {
    //         count_100 += 2;
    //         count_200 -= 1;
    //     }
    //     count_500 += 1;
    //     count_200 -= 2;
    //     count_100 -= 1;
    //     printf("Phuong an %d: %d to 50000 + %d to 100000 + %d to 200000 + %d to 500000\n", solution, count_50, count_100, count_200, count_500);
    // }

    // // ?: 50 + x: 100 + ?: 200;
    // count_200 = 0;
    // count_100 = 1;
    // count_50 = 0;
    // count_50 = (withdraw_money - (withdraw_money / 100000 - 1)) / 50000;
    // while (count_100 < withdraw_money / 100000 - 1)
    // {
    //     solution++;
    //     count_200 = 1;
    //     count_50 = (withdraw_money - count_100 * 100000 - count_200 * 200000) / 50000;

    //     if (count_50 != 0)
    //     {
    //     printf("Phuong an %d: %d to 50000 + %d to 100000 + %d to 200000 + %d to 500000\n", solution, count_50, count_100, count_200, count_500);
    //     }

    //     while (count_50 > 4)
    //     {
    //         solution++;
    //         count_200++;
    //         count_50 -= 4;
    //         printf("Phuong an %d: %d to 50000 + %d to 100000 + %d to 200000 + %d to 500000\n", solution, count_50, count_100, count_200, count_500);
    //     }
    //     count_100++;
    // }

    // // ?: 50 + ?: 100 + x: 200
    // count_200 = 1;
    // count_50 = 0;
    // count_100 = 0;
    // count_50 = (withdraw_money - count_200 * 200000) / 50000;
    // while (count_200 < withdraw_money / 200000 - 1)
    // {
    //     solution++;
    //     count_100 = 1;
    //     count_50 = (withdraw_money - count_100 * 100000 - count_200 * 200000) / 50000;
    //     printf("Phuong an %d: %d to 50000 + %d to 100000 + %d to 200000 + %d to 500000\n", solution, count_50, count_100, count_200, count_500);
    //     while (count_50 > 4)
    //     {
    //         solution++;
    //         count_100++;
    //         count_50 -= 2;
    //         printf("Phuong an %d: %d to 50000 + %d to 100000 + %d to 200000 + %d to 500000\n", solution, count_50, count_100, count_200, count_500);
    //     }
    //     count_200++;
    // }

    return 1;
}

// long int money_change(long int money_in, long int money_out, int count)
// {
//     int output = 0

//     // if (money_in % money_out)

//     return output;
// }