#include <stdio.h>

int *func()
{
    static int arr[5] = {1, 2, 3, 4, 5};
    return arr;
}

int main()
{
    int *p = func();

    printf("Array elements are:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *p++);
    }
    return 0;
}