#include <stdio.h>
int main()
{
    int digits = 124;
    int count = 0;
    bool result = true;
    int digit_before = 10;
    while (digits != 0)
    {
        int digit = digits % 10;
        if (digit_before >= digit)
        {
            digit_before = digit;
        }
        else
        {
            result = false;
        }
        digits /= 10;
        count++;
        printf("%d\n",digits);
    }
    printf("\n count: %d", count);
    printf("\n%d", result);
    return 1;
}