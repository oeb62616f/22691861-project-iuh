#include <stdio.h>

int n;
long sum = 0;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i * (i + 1) * (i + 2);
    }

    printf("S4: %li", sum);
    return 1;
}