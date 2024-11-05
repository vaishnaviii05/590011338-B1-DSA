//Write a program in C that performs the following operations on an array of integers

#include <stdio.h>

int main() {
    int n, i, j, temp;
    int sum = 0;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];
    
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    float average = (float)sum / n;
    
    printf("\nLargest element: %d", largest);
    printf("\nSmallest element: %d", smallest);
    printf("\nSorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSum of elements: %d", sum);
    printf("\nAverage of elements: %.2f\n", average);

    return 0;
}
