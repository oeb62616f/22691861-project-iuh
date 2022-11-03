#include <stdio.h>

int n;
long mul = 1;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        mul *= i;
    }

    printf("Factorial: %li", mul);

    return 1;
}