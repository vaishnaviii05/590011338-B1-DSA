#include <stdio.h>
void arrayfunction(int arr[])
{
    printf("Array size in function: %d\n", sizeof(arr));
    printf("Array Elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[5]= {10,20,30,40,50};

    printf("Array size in main(): %d\n", sizeof(arr));
    arrayfunction(arr);
    return 0;
}