/*

Project: Lab09_Bai0057
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <math.h>

// Creatinf define
#define MONEY_1 2000
#define MONEY_2 1000
#define MONEY_3 5000
#define TIME_1 4
#define TIME_2 7

// Creating functions
int get_money_pay(float time);
void check_in();

// Creating variables
float time_in;
float time_out;
int money_pay;
int total_id_bike;
int total_time;
int total_money;
float average_time;
float average_money;
bool is_stop = true;

// Main
int main()
{

    while (is_stop)
    {
        total_id_bike++;
        printf("Bike %d time in: ", total_id_bike);
        scanf("%f", &time_in);
        printf("Bike %d time out: ", total_id_bike);
        scanf("%f", &time_out);

        is_stop = (time_out - time_in) == 0? false: true;

        time_in = round(time_in);
        time_out = ceil(time_out);

        total_money += get_money_pay(time_out - time_in);
        total_time += (time_out - time_in);
    }

    total_id_bike--;

    average_time = total_time / total_id_bike;
    average_money = total_money / total_id_bike;

    printf("Total bike: %d\n", total_id_bike);
    printf("Total time: %d\n", total_time);
    printf("Total money: %d\n", total_money);
    printf("Average time: %f\n", average_time);
    printf("Average money: %f\n", average_money);

    return 1;
}

int get_money_pay(float time)
{
    time = ceil(time);
    int money = 0;
    if (time > TIME_2)
    {
        money = (time - TIME_2) * MONEY_3 + get_money_pay(TIME_2);
    }
    else if (time > TIME_1)
    {
        money = (time - TIME_1) * MONEY_2 + get_money_pay(TIME_1);
    }
    else
    {
        money = time * MONEY_1;
    }

    return money;
}
