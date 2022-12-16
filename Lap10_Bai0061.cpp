/*

Project: Lab10_Bai0061
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Creating variables
int n = 1000;
int element_show = 10;
int time_pause = 1000;
int sum;
int index = 1;

// Main
int main()
{   

    int arr[n];
    for (int *i = arr; i < arr + n; i++)
    {
        *i = rand();
        sum += *i;
        printf("%d ", *i);
        if (index == 10)
        {
            Sleep(time_pause);
            printf("\n");
            index = 0;
        }
        index++;
    }


    return 1;
}


