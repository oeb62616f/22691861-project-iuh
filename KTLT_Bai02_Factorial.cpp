#include <stdio.h>
#include <math.h>
void input(float *a, int *n);
long double get_sum(long double sum, float base, int i, float a, int n);
long double get_factorial_sum(float base, int n, float a);
bool is_datatype = true;

int main()
{
    float a;
    int n;
    long double s;
    input(&a, &n);


    printf("%lf", get_factorial_sum(pow(a,n),n,a));

    return 1;
}

void input(float *a, int *n)
{
    printf("Value of a: ");
    scanf("%f", &*a);
    printf("Value of n: ");
    scanf("%d", &*n);
}

long get_factorial(int n)
{
    long int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

long double get_sum(long double sum, float base, int i, float a, int n)
{
    sum += base;
    i++;
    if (i <= n)
    {
        return get_sum(sum, base * a / i, i, a, n);
    }
    return sum;
}

long double get_factorial_sum(float base, int n, float a)
{
    if (n == 0)
    {
        return 0;
    }
    return get_factorial_sum(base * (n - 1) / a, n - 1, a);
}