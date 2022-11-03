#include <stdio.h>

int n;
float probability;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 7 == 0)
        {
            probability++;
        }
    }
    printf("Probability: %.3f || Times: %d", probability / n, (int)probability);
    return 1;
}