#include <stdio.h>

int n;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0 && i % 3 == 0)
        {
            printf("%d ", i);
        }
    }
    return 1;
}