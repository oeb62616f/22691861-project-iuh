#include <stdio.h>

int n;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);

    }
    return 1;
}