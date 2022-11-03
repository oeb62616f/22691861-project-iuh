#include <stdio.h>

long n;
long sum;

int main()
{

    printf("value of n: ");
    scanf("%li", &n);

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        printf("%li la so hoan hao", n);
    }
    else
    {
        printf("%li khong phai la so hoan hao", n);
    }

    return 1;
}