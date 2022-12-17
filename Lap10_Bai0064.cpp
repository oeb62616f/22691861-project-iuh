/*

Project: Lab10_Bai0062
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>

// Creating variables
int n;

// Main
int main()
{

    printf("Value of n: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Value of element %d: ", i + 1);
        scanf("%d", &arr[i]);
        for (int index_1 = 0; index_1 < i; index_1++)
        {
            for (int index_2 = index_1 + 1; index_2 <= i; index_2++)
            {
                if (arr[index_1] > arr[index_2])
                {
                    int temp = arr[index_1];
                    arr[index_1] = arr[index_2];
                    arr[index_2] = temp;
                }
            }
        }
    }

    for (int *i = arr; i < arr + n; i++)
    {
        printf("%d ", *i);
    }

    return 1;
}
