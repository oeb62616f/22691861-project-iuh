/*

Project: Lab_No6 problem 3
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim: knowledge of printf char, dec, oct, hex => Format Specifier

Solution:

Date: 30/10/2022

*/

// Include
#include <stdio.h>

// Main
int main()
{

    for (int code = 0; code < 256; code++)
    {
        printf("%c, %3d, %3o, %3X\n", code, code, code, code);
    }

    return 1;
}