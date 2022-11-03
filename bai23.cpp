#include <stdio.h>

long n;
long temp;
long mul = 1;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        if ((temp % 10) % 2 == 0)
        {
            mul *= temp % 10;
        }
        temp /= 10;
    }

    printf("tich so chu so chan cua %li la: %d", n, mul);

    return 1;
}