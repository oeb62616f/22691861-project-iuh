#include <stdio.h>

long long int get_factorial(int n);

int main()
{
    printf("result: %lld", get_factorial(3));
    return 1;
}

long long int get_factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return get_factorial(n - 1) * n;
}