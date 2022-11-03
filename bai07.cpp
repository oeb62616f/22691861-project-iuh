#include <stdio.h>

int n;
int sum = 0;

int main()
{
    printf("value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum: %d", sum);
    return 1;
}