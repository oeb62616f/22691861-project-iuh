#include <stdio.h>

int n;
long sum = 0;
long result;
int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    result = sum / n;
    printf("S2 = %li", result);
    return 1;
}