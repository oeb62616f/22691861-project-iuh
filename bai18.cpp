#include <stdio.h>

int n;
float probability;
long sum = 0;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            probability++;
            sum += i;
        }
    }
    printf("Probability: %.3f || Times: %d || Sum: %li", probability / n, (int)probability, sum);
    return 1;
}