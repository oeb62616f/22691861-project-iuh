/*

Project: Lab11_problem_05
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <stdlib.h>

// Creating funtions
bool is_in_list(int *array_base, int length, int id);

// Creating variables
int money_pay_each_time;
int total_id_bike;
int total_bike;
int temp_id_bike;
int *bike_matrix;
int *paying_id_list;
int *time_list;
bool is_stop = false;
bool is_paying_list = false;

// Main
int main()
{
    bike_matrix = (int *)malloc(1 * sizeof(int));
    paying_id_list = (int *)calloc(1, sizeof(int));
    time_list = (int *)calloc(1, sizeof(int));

    while (!is_stop)
    {
        printf("id xe thu %d: ", total_id_bike + 1);
        scanf("%d", &temp_id_bike);
        if (temp_id_bike == 0)
        {
            is_stop = true;
        }
        else
        {
            bike_matrix[total_id_bike] = temp_id_bike;
            total_id_bike++;
            realloc(bike_matrix, total_id_bike + 1);
        }
    }

    printf("\nDon gia: ");
    scanf("%d", &money_pay_each_time);


    realloc(bike_matrix, total_id_bike);
    for (int i = 0; i < total_id_bike; i++)
    {
        is_paying_list = is_in_list(paying_id_list, total_bike + 1, bike_matrix[total_bike]);
        if (!is_paying_list)
        {
            paying_id_list[total_bike] = bike_matrix[i];
            for (int j = 0; j < total_id_bike; j++)
            {
                if (bike_matrix[i] == bike_matrix[j])
                {
                    time_list[total_bike] += 1;
                }
            }
            total_bike++;
            realloc(paying_id_list, total_bike + 1);
            realloc(time_list, total_bike + 1);
        }
    }
    realloc(paying_id_list, total_bike);
    realloc(time_list, total_bike);

    for (int i = 0; i < total_bike;i++)
    {
        printf("Id: %d      || Time: %d     || Money will be pay: %d\n", paying_id_list[i], time_list[i], time_list[i] * money_pay_each_time);
    }

    free(bike_matrix);
    free(paying_id_list);
    free(time_list);
    return 1;
}

bool is_in_list(int *array_base, int length, int id)
{
    bool result = false;
    for (int *i = array_base; i < array_base + length; i++)
    {
        if (id == *i)
        {
            return true;
        }
    }
    return result;
}