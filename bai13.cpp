#include <stdio.h>
#include <math.h>

int n;
long sum = 0;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += pow(2 * i + 1, 2);
    }
    printf("S6: %li", sum);
    return 1;
}