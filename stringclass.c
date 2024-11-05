#include <stdio.h>
int main()
{
    char arr[6]={'S','A','L','O','N','I'};

    int i=0;
    while(arr[i])
    {
        printf("%c", arr[i++]);
    }
    return 0;
}