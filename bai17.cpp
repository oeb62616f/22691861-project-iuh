#include <stdio.h>

int n;
float probability;
long mul = 1;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 2 == 1)
        {
            probability++;
            mul *= i;
        }
    }
    printf("Probability: %.3f || Mul: %d", probability / n, mul);
    return 1;
}