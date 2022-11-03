#include <stdio.h>

int n;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        if (i % 3 == 0)
        {
        printf("%d ", i);
        }
    }
    return 1;
}