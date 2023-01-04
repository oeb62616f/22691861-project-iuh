#include <stdio.h>

long int get_sum(int n);
void input_n(int *n);
void show_result(long int sum);

int main()
{
    int n1;
    long int s1;
    input_n(&n1);
    s1 = get_sum(n1);
    show_result(s1);
    return 1;
}

long int get_sum(int n)
{
    return !(n < 1) ? n * (1 + n) / 2 : -1;
}

void show_result(long int sum)
{
    if (sum == -1)
    {
        printf("Wrong input");
    }
    else
    {
        printf("Sum: %ld", sum);
    }
}

void input_n(int *n)
{
    printf("Value of n: ");
    scanf("%d", &*n);
}