#include <stdio.h>

int n;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", n - i);

    }
    return 1;
}