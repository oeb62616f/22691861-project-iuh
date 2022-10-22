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

// Creating variables
int m;
int n;
int g;
int r;


// Main
int main()
{

    // Input
    printf("m: ");
    scanf("%d", &m);
    printf("n: ");
    scanf("%d", &n);

    r = m % n;
    while(r != 0)
    {
        r = m % n;
        m = n;
        n = r;
        g = n;
    }

    printf("%d", g);

    return 1;
}