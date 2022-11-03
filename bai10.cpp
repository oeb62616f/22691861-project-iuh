#include <stdio.h>
#include <math.h>

int n;
long sum = 0;
float result;
int main()
{

    printf("value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += pow(i,2);
    }

    result = sqrt(sum);
    printf("S3 = %f", result);
    return 1;
}