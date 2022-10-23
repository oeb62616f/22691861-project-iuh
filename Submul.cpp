/*

Project: Submul
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: 

Solution:

Date: 22/10/2022

*/

// Include
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Creating variables
int m;
int n;
int g;
int r;
bool is_datatype = false;

// Main
int main()
{

    // Input
    printf("m: ");
    scanf("%d", &m);
    printf("n: ");
    scanf("%d", &n);

    if (2 <= m && n <= pow(10,9))
    {
        is_datatype = true;
    }

    if (is_datatype)
    {
        r = m % n;
        while(r != 0)
        {
            r = m % n;
            m = n;
            n = r;
            g = m;
        }
        printf("%d", g);
    }
    return 1;
}