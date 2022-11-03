#include <stdio.h>

long n;
long temp;
int count = 0;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    printf("so chu so cua %li la: %d", n, count);

    return 1;
}