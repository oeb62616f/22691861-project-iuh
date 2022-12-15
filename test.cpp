#include <stdio.h>
#include <stdlib.h>

int main()
{

    // a pointer to dynamically allocated memory from the heap is returned.

    int *a = (int *)malloc(20 * sizeof(int));

    for (int i = 0; i < 20; i++)
        a[i] = i + 1;

    printf("\nThe contents of the array are: \n");
    for (int i = 0; i < 20; i++)
        printf("%d\t", a[i]);

    realloc(a, 40);

    for (int i = 0; i < 40; i++)
        a[i] = i + 1;

    printf("\nThe revised contents of the array are: \n");
    for (int i = 0; i < 40; i++)
        printf("%d\t", a[i]);

    free(a); // return the dynamically allocated memory to the heap again so as to avoid memory leaks.

    return 0;
}