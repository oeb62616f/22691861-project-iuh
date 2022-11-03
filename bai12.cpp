#include <stdio.h>

int n;
long sum = 0;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = n % 2 == 0 ? 0 : 1; i <= n; i += 2)
    {
        sum += i;
    }
    printf("S5: %li", sum);
    return 1;
}