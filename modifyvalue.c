#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    printf("\nelements before modification:");
    for(int j = 0; j < 5; j++)
    {
        arr[j];
        printf("\n%d", arr[j]);
    }
   // Modifying value
    arr[2] = 300;
    printf("\nelements after modifying value:");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}