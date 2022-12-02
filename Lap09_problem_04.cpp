/*

Project: Lab09_problem_04
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>

// Creating functions
void input();
void output();
int ucln(int a, int b);
void toi_gian(int ucln);

// Creating variables
int a;
int b;

// Main
int main()
{
    input();
    toi_gian(ucln(a,b));
    output();
    return 1;
}

void input()
{
    printf("Nhap phan so: ");
    scanf("%d %d", &a, &b);
}
void output()
{
    printf("%d/%d", a, b);
}
int ucln(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}
void toi_gian(int ucln)
{
    a = a / ucln;
    b = b / ucln;
}