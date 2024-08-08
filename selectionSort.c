#include <stdio.h>

#define SIZE 5 // Define the size of the array

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    
    // Traverse through all array elements
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted portion
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap the found minimum element with the first element of the unsorted portion
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[SIZE] = {64, 34, 25, 12, 22}; // Initialize the array with unsorted values
    int n = SIZE;

    printf("Original array: \n");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}