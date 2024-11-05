#include <stdio.h>
int main()
{
    int arr[5]= {1,2,3,4,5};
    int *ptr = &arr[0];

    printf("elements displaying using pointer:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", *ptr++);
    }
    return 0;
}