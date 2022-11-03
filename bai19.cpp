#include <stdio.h>

int n;
bool is_prime = true;

int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            is_prime = false;
        }
    }

    if (is_prime)
    {
        printf("%d la so nguyen to", n);
    }
    else
    {
        printf("%d khong la so nguyen to", n);
    }
    return 1;
}