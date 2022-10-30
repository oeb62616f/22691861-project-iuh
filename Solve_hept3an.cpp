/*

Project: Solve hept3an
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: show a b c

Solution:

Date: 23/10/2022

*/

// Include 
#include <stdio.h>
#include <conio.h>

// Creating variables
int k;
float D;
float D_x;
float D_y;

// Main
int main()
{

    // input k
    printf("k =");
    scanf("%d", &k);
    float a1[k];
    float b1[k];
    float c1[k];
    float a2[k];
    float b2[k];
    float c2[k];

    // input a, b, c

    for (int i = 0; i < k; i++)
    {
        scanf("%f %f %f %f %f %f", &a1[i], &b1[i], &c1[i], &a2[i], &b2[i], &c2[i]);
        printf("%f %f %f %f %f %f", a1[i], b1[i], c1[i], a2[i], b2[i], c2[i]);
    }
    





    return 1;
}


