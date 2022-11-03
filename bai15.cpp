#include <stdio.h>

int n;
long sum;
float probability;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            sum += i;
            probability++;
        }
    }
    printf("Probability: %.3f || Sum: %li", probability / n, sum);
    return 1;
}