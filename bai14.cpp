#include <stdio.h>

int n;
float sum = 0;
float tu;
float mau;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum +=  (float)(2 * i - 1) / (float)(2 * i);
    }
    printf("S7: %f", sum);
    return 1;
}