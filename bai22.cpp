#include <stdio.h>

long n;
long temp;
long sum = 0;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    printf("tong so chu so cua %li la: %d", n, sum);

    return 1;
}