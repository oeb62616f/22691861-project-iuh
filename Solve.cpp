/*

Project: Slove
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
bool is_datatype = false;

// Main
int main()
{

    // Input: m,n | m <= n <= 50
    printf("m: ");
    scanf("%d", &m);
    printf("n: ");
    scanf("%d", &n);

    if (m <= n && n <= 50)
    {
        is_datatype = true;
    }
    if (is_datatype)
    {
        for (int x = m; x <= n; x++)
        {
            for (int y = m; y <= n; y++)
            {
                for (int z = m; z<= n;z++)
                {
                    if (x*x + y*y == z*z)
                    {
                        printf("%d %d %d\n", x, y, z);
                    }
                }
            }
        }
    }
    return 1;
}

