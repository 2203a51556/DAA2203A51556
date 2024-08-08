#include <stdio.h>

void sortAscending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%10d\n", arr[i]);
    }
}

int main() {
    int n1 = 4;
    int times1[] = {20, 15, 30, 42};
    
    printf("TEST CASE 1:\n");
    sortAscending(times1, n1);
    printArray(times1, n1);
    
    int n2 = 4;
    int times2[] = {15, 69, 80, 14};
    
    printf("\nTEST CASE 2:\n");
    sortDescending(times2, n2);
    printArray(times2, n2);
    
    return 0;
}
